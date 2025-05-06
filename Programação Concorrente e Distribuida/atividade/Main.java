package atividade;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.*;
import java.time.Instant;
import java.time.Duration;

public class Main {
    public static void main(String[] args) {
        Instant inicio = Instant.now();
        String caminhoDaPasta = "C:\\Users\\caio.hmarques\\eclipse-workspace\\atividadeAvaliativa\\src\\cpfs";
        List<String> cpfs = LeitorDeArquivos.listarCPFsNaPasta(caminhoDaPasta);
        
        int numeroDeThreads = 3; // Digite o valor de Threads desejado
        
        List<List<String>> NumArquivos = dividirLista(cpfs, numeroDeThreads);
        ExecutorService executor = Executors.newFixedThreadPool(numeroDeThreads);
        List<Future<Boolean>> resultados = new ArrayList<>();
        int[] contador = new int[2];

        for (List<String> listaAuxiliar : NumArquivos) {
            resultados.add(executor.submit(new ValidadorDeCPFs(listaAuxiliar, contador)));
        }

        for (Future<Boolean> resultado : resultados) {
            try {
                resultado.get();
            } catch (InterruptedException | ExecutionException e) {
                e.printStackTrace();
            }
        }

        executor.shutdown();
        Instant fim = Instant.now();
        Duration duracao = Duration.between(inicio, fim);
        System.out.println("Tempo de execução: " + duracao.toMillis() + " milissegundos");
        System.out.println("Total de CPFs verdadeiros: " + contador[1]);
        System.out.println("Total de CPFs falsos: " + contador[0]);
    }

    private static List<List<String>> dividirLista(List<String> lista, int numeroDeSublistas) {
        List<List<String>> sublistas = new ArrayList<>();
        int tamanhoListas = (int) Math.ceil((double) lista.size() / numeroDeSublistas);

        for (int i = 0; i < lista.size(); i += tamanhoListas) {
            sublistas.add(new ArrayList<>(lista.subList(i, Math.min(i + tamanhoListas, lista.size()))));
        }

        return sublistas;
    }
}

