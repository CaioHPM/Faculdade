package atividade;

import java.io.IOException;
import java.nio.file.*;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Stream;

public class LeitorDeArquivos {
    public static List<String> listarCPFsNaPasta(String caminhoDaPasta) {
        List<String> cpfs = new ArrayList<>();
        try (Stream<Path> paths = Files.walk(Paths.get(caminhoDaPasta))) {
            paths.filter(Files::isRegularFile)
                 .forEach(path -> cpfs.addAll(extrairCPFs(path)));
        } catch (IOException e) {
            e.printStackTrace();
        }
        return cpfs;
    }

    private static List<String> extrairCPFs(Path path) {
        List<String> cpfs = new ArrayList<>();
        try {
            List<String> linhas = Files.readAllLines(path);
            Pattern pattern = Pattern.compile("\\d{11}");
            for (String linha : linhas) {
                Matcher matcher = pattern.matcher(linha);
                while (matcher.find()) {
                    cpfs.add(matcher.group());
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return cpfs;
    }
}
