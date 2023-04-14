// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    // Convert the input numbers from strings to arrays of integers
    int vec1[strlen(num1)];
    for (int i = 0; i < strlen(num1); i++) {
        vec1[i] = num1[strlen(num1) - i - 1] - '0';
    }
    int vec2[strlen(num2)];
    for (int i = 0; i < strlen(num2); i++) {
        vec2[i] = num2[strlen(num2) - i - 1] - '0';
    }
 
    // Initialize the result array with zeros
    int result[strlen(num1) + strlen(num2)];
    memset(result, 0, sizeof(result));
 
    // Multiply each digit in vec2 with vec1 and add the result to the appropriate position in the result array
    for (int i = 0; i < strlen(num2); i++) {
        int carry = 0;
        for (int j = 0; j < strlen(num1); j++) {
            int product = vec1[j] * vec2[i] + carry + result[i + j];
            carry = product / 10;
            result[i + j] = product % 10;
        }
        result[i + strlen(num1)] = carry;
    }
 
    // Remove leading zeros from the result array and convert it back to a string
    while (strlen(num1) + strlen(num2) > 1 && result[strlen(num1) + strlen(num2) - 1] == 0) {
        strcpy(&result[strlen(num1) + strlen(num2) - 1], &result[strlen(num1) + strlen(num2)]);
    }
    char* str = (char*)malloc((strlen(num1) + strlen(num2) + 1) * sizeof(char));
    memset(str, '0', strlen(num1) + strlen(num2));
    for (int i = 0; i < strlen(num1) + strlen(num2); i++) {
        str[strlen(num1) + strlen(num2) - i - 1] = result[i] + '0';
    }
    str[strlen(num1) + strlen(num2)] = '\0';
    return str;
}
int main() {
    
    
    char num3[] = "235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708";
    char num4[] = "6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932";
    printf("%s\n", multiply(num3, num4));
    
    return 0;
}
