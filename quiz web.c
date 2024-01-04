//Q1 c lanlanguage
#include <stdio.h>

int main() {  
    // i use float because weight, height, bmi come with point (.)
    float weight, height, bmi;

    // show to user to enter weight and height
    printf("Enter your weight pls: ");
    scanf("%f", &weight);
    printf("Enter your height pls: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // and now we use the condition 
    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25) {
        printf("Normal\n");
    }
    else if (bmi >= 25 && bmi < 30) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

    return 0;
}



//Q2 c lanlanguage
#include <stdio.h>

int main() {
    int N = 5;
    for (int i = 1; i <= N; i++) {
     for (int j = 1; j <= N; j++) {
        if (j == i)
                printf("=");
        else
                printf("+");
        }
        printf("\n");
    }
    return 0;
}


//Q3 c lanlanguage
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 2;
    int b = 4;
    int result = add(a, b);
    //%d come from the values a,b,result
    printf("The sum of %d and %d is %d\n", a, b, result);

    return 0;
}


//Q4 c lanlanguage
#include <stdio.h>

int main()
{
    char name [5][7]={"string","string","string","string","string"};
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            printf("%c",name[r][c]);
        }
        printf("....");
    } 


    return 0;
}

//Q5 c lanlanguage
#include <stdio.h>
#include <string.h>

typedef struct {
    char *key;
    char *value;
} KeyValue;

char* searchKeyByValue(KeyValue arr[], int size, char *searchValue) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].value, searchValue) == 0) {
            return arr[i].key;
        }
    }
    return NULL; // Return NULL if the value is not found
}

int main() {
    KeyValue arr[] = {
        {"key1", "value1"},
        {"key2", "value2"},
        {"key3", "value3"},
        {"key4", "value4"}
    };

    char *searchValue = "value3";
    char *result = searchKeyByValue(arr, sizeof(arr) / sizeof(arr[0]), searchValue);

    if (result != NULL) {
        printf("Key for value '%s' is '%s'\n", searchValue, result);
    } else {
        printf("Value '%s' not found in the array.\n", searchValue);
    }

    return 0;
}

//Q6 c# lanlanguage
using System;
using System.Collections.Generic;

class MathOperations
{
    public static int Add(int a, int b) => a + b;
}

class StringArrayOperations
{
    public static string ConcatenateStrings(params string[] strings) => string.Join(" ", strings);
}

class KeyValueSearch
{
    private readonly Dictionary<string, string> keyValuePairs;

    public KeyValueSearch(Dictionary<string, string> keyValuePairs) => this.keyValuePairs = keyValuePairs;

    public string SearchValue(string value) => keyValuePairs.FirstOrDefault(pair => pair.Value == value).Key ?? "Key not found";
}

class Program
{
    static void Main()
    {
        // Example usage:

        // 3. MathOperations
        Console.WriteLine("Result of addition: " + MathOperations.Add(5, 3));

        // 4. StringArrayOperations
        string pattern = StringArrayOperations.ConcatenateStrings("string", "string", "string", "string", "string");
        Console.WriteLine("Concatenated pattern: " + pattern);

        // 5. KeyValueSearch
        Dictionary<string, string> keyValuePairs = new Dictionary<string, string>
        {
            { "key1", "value1" },
            { "key2", "value2" },
            { "key3", "value3" },
            { "key4", "value4" }
        };

        KeyValueSearch keyValueSearch = new KeyValueSearch(keyValuePairs);
        Console.WriteLine("Key for searched value: " + keyValueSearch.SearchValue("value2"));
    }
}