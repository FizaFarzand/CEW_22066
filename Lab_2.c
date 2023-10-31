//Lab 2 all exercise questions


//#include<stdio.h>

//ANSWER NO 1

//USING FOR LOOP

//int main() {
//  int num, i, sum = 0;
//
//  printf("Enter the number of odd natural numbers to print: ");
//  scanf("%d", &num);
//
//  printf("The first %d odd natural numbers are:\n", num);
//  for (i = 1; i <= num; i += 2) {
//    printf("%d ", i);
//    sum += i;
//  }
//
//  printf("\nThe sum of the first %d odd natural numbers is %d\n", num, sum);
//
//  return 0;
//}

//USING WHILE LOOP

//int main() {
//  int n, i = 1, sum = 0;
//
//  printf("Enter the number of odd natural numbers to print: ");
//  scanf("%d", &n);
//
//  printf("The first %d odd natural numbers are:\n", n);
//  while (i <= n) {
//    printf("%d ", i);
//    sum += i;
//    i += 2;
//  }
//
//  printf("\nThe sum of the first %d odd natural numbers is %d\n", n, sum);
//
//  return 0;
//}

//USING DO WHILE

//int main() {
//    int num, i=1;
//    printf("Enter any Number:\t");
//    scanf("%d",&num);
//    do{
//        printf("%d ",i);
//        i=i+2;
//    }while(i <= 2*num);
//    return 0;
//}




//ANSWER NO 2



//int main() {
//    int rows, i, j, space;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 1; i <= rows; i++) {
//        // Print spaces
//        for (space = 1; space <= rows - i; space++) {
//            printf(" ");
//        }
//
//        // Print asterisks
//        for (j = 1; j <= i; j++) {
//            printf("* ");
//        }
//
//        // Move to the next line
//        printf("\n");
//    }
//    return 0;
//}



//ANSWER NO 3



//int main(){
//  char s1[] = "default", s2[] = "default";
//  printf("Enter the first string: ");
//  scanf("%s",s1);
//  printf("Enter the second string: ");
//  scanf("%s",s2);
//  int i;
//  for(i = 0; s1[i]==s2[i] && s1[i]!='\0'; i++);
//  printf("%d", s1[i] - s2[i]);
//  return 0;
//}



//ANSWER NO 4


//int main() {
//    char sentence[1000];
//    printf("Enter a sentence: ");
//    gets(sentence);
//
//    for (int i = 0; sentence[i] != '\0'; i++) {
//        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
//            sentence[i] = sentence[i] - 32; // Convert lowercase to uppercase
//        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
//            sentence[i] = sentence[i] + 32; // Convert uppercase to lowercase
//        }
//    }
//
//    printf("Modified sentence: %s\n", sentence);
//
//    return 0;
//}



//ANSWER NO 5


//int main() {
//    int len;
//    printf("Enter the length of an array: ");
//    scanf("%d", &len);
//    if (len <= 0) {
//        printf("Array length must be a positive integer.\n");
//        return 1;
//    }
//    int arr[len];
//    printf("Enter %d elements:\n", len);
//    for (int i = 0; i < len; i++) {
//        printf("Enter element #%d: ", i + 1);
//        scanf("%d", &arr[i]);
//    }
//    printf("The unique elements in your array are:\n");
//    for (int i = 0; i < len; i++) {
//        int count = 0;
//        for (int j = 0; j < len; j++) {
//            if (arr[i] == arr[j]) {
//                count++;
//            }
//        }
//        if (count == 1) {
//            printf("%d ", arr[i]);
//        }
//    }
//    printf("\n");
//    return 0;
//}



// ANSWER NO 6


//struct Distance {
//    int feet;
//    int inches;
//};
//
//int main() {
//    struct Distance distance1, distance2;
//
//    printf("Enter the feet and inches of the first distance: ");
//    scanf("%d %d", &distance1.feet, &distance1.inches);
//
//    printf("Enter the feet and inches of the second distance: ");
//    scanf("%d %d", &distance2.feet, &distance2.inches);
//
//    printf("The total distance is: %d'%d\n", distance1.feet + distance2.feet, distance1.inches + distance2.inches);
//
//    return 0;
//}