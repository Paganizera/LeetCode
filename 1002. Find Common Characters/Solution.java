public class Solution {

    public List<String> commonChars(String[] words) {
        int[] minFreq = new int[26];

        Arrays.fill(minFreq, 2147483647);

        for (String word : words) {
            
            int[] charCounter = new int[26];
            
            for (char character : word.toCharArray()) {
                charCounter[character - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                if (minFreq[i] > charCounter[i]) minFreq[i] = charCounter[i];
            }
        }

        List<String> result = new ArrayList<>();
        for (int i = 0; i < 26; i++) {
            while (minFreq[i] > 0) {
                result.add(Character.toString((char) (i + 'a')));
                minFreq[i]--;
            }
        }

        return result;
    }
}
