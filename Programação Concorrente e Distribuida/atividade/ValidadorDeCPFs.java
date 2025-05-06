package atividade;

import java.util.List;
import java.util.concurrent.Callable;

public class ValidadorDeCPFs implements Callable<Boolean> {
    private final List<String> cpfs;
    private final int[] contagem;

    public ValidadorDeCPFs(List<String> cpfs, int[] contagem) {
        this.cpfs = cpfs;
        this.contagem = contagem;
    }

    @Override
    public Boolean call() {
        for (String cpf : cpfs) {
            boolean valido = validaCPF(cpf);
            synchronized (contagem) {
                if (valido) {
                    contagem[1]++;
                } else {
                    contagem[0]++;
                }
            }
        }
        return true;
    }

    private boolean validaCPF(String cpf) {
        cpf = cpf.replaceAll("\\D", "");
        if (cpf.length() != 11 || cpf.chars().distinct().count() == 1) {
            return false;
        }
        for (int i = 9; i <= 10; i++) {
            int soma = 0;
            for (int j = 0; j < i; j++) {
                soma += (cpf.charAt(j) - '0') * ((i + 1) - j);
            }
            int digito = (soma * 10) % 11;
            if (digito == 10) digito = 0;
            if (digito != (cpf.charAt(i) - '0')) {
                return false;
            }
        }
        return true;
    }
}
