import java.util.*;
 
public class tuf {
 
public static void main(String args[]){  
   
   int arr[] = {10,5,10,15,10,5};
     int n = arr.length;
     Frequency(arr, n);
  }
static void Frequency(int arr[], int n)
{
    Map<Integer,Integer> map = new HashMap<>();

    for(int i=0;i<arr.length;i++){
        if(map.containsKey(arr[i])){
           map.put(arr[i], map.get(arr[i]) + 1);
        }
        else{
           map.put(arr[i],1);
        }
    }

    //This is also one of the method to count frequencies
    /* 
    for(int num:arr){
        map.put(num, map.getOrDefault(num, 0) + 1);
    }
*/
    // Traverse through map and print frequencies
    for(Map.Entry<Integer,Integer> entry : map.entrySet()){
        System.out.println(entry.getKey()+" : "+entry.getValue());
    }
}
}