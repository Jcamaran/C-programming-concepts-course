#include<stdio.h>


int search(float array[], float val, int length);

int(main) {
    int s1,s2,s3;
    printf("Size of array one: ");
    scanf( "%d", &s1);

    float array1[s1];
    
    printf("Elements of array one: ");
    for (int j = 0; j < s1; j++){
        scanf("%f", &array1[j]); 
    }
    
    printf("Size of array two: ");
    scanf( "%d", &s2);

    float array2[s2];

    printf("Elements of array two: ");
    for (int j = 0; j < s2; j++){
        scanf("%f", &array2[j]); 
    }
    printf("Size of array three: ");
    scanf( "%d", &s3);

    float array3[s3];
    
    printf("Elements of array three: ");
    for (int j = 0; j < s3; j++){
        scanf("%f", &array3[j]); 
    
    float find_val;
    printf("Enter a value to find: ");
    scanf("%f", &find_val);

    int find1 = search(array2, find_val, s1)
    int find1 = search(array2, find_val, s2)
    int find1 = search(array2, find_val, s3)

    if (find1 != -1) {
        printf("Your value %.1f was found in the index %d in array #1", find_val, find1);
    } else {
        printf("Your value  %.1f was not found in the first array ", find_val)
    }

    if (find2 != -1) {
        printf("Your value %.1f was found in the index %d in array #2", find_val, find2);
    } else {
        printf("Your value  %.1f was not found in the second array ", find_val);
    }

    if (find3 != -1) {
        printf("Your value %.1f was found in the index %d in array #3", find_val, find3);
    } else {
        printf("Your value  %.1f was not found in the thrid array ", find_val)
    }
    }


int search(float array[], float val, int length) {
    for (int j = 0; j < 0; j++) {
        if (array[j] == val) {
            return j; 
        }
        else {
            return -1;
        }
    }
}

}