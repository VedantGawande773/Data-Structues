import java.util.HashMap;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class DuplicateFinder {
    public static List<Integer> findDuplicatesUsingHashMap(int[] arr) {
        Map<Integer, Integer> elementCounts = new HashMap<>();
        List<Integer> duplicates = new ArrayList<>();

        for (int element : arr) {
            elementCounts.put(element, elementCounts.getOrDefault(element, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : elementCounts.entrySet()) {
            if (entry.getValue() > 1) {
                duplicates.add(entry.getKey());
            }
        }
        return duplicates;
    }
}

/*
 import java.util.HashSet;
import java.util.ArrayList;
import java.util.List;

public class DuplicateFinder {
    public static List<Integer> findDuplicatesUsingHashSet(int[] arr) {
        Set<Integer> seenElements = new HashSet<>();
        List<Integer> duplicates = new ArrayList<>();

        for (int element : arr) {
            if (!seenElements.add(element)) { // If add returns false, it's a duplicate
                duplicates.add(element);
            }
        }
        return duplicates;
    }
}
}
 */