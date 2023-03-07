#include <stdio.h>
#include "ciphers.h"



// The code below is shown only to get you started
int main(void) {
	// String with initialization
	char alphabet[] = " ZYXWVUTSRQPONMLKJIHGFEDCBA";
	char test[] = "SZFMT GNUAHOVBIPWCJQXDKRYEL"; //size:27

	// Array declaration to hold a string 
	// (of up to 255 characters, plus '\0' character)
	char input[256];
	char output[256];

	// Print the alphabet
	// We demarcate the string with | | so spaces at the
	// start or end can be distinguished more clearly
	//printf("\n This is the alphabet: \"%s\"\n", alphabet);

//testing char_at_index method:
	//positive shift less than the len of input
	//printf("testing char_at_index: pos shift, expected = F, actual =  %c\n", char_at_index(test, 4, 25)); //pass
	//shift greated than the length of input
	//printf("testing char_at_index: large pos shift, expected = F, actual =  %c\n", char_at_index(test, 30, 26)); //pass
	//printf("testing char_at_index: bigger pos shift, expected = F, actual =  %c\n", char_at_index(test, 65, 18)); //pass
	//negative shift
	//printf("testing char_at_index: neg shift, expected = S, actual =  %c\n", char_at_index(test, -4, 4)); //pass
	//large negative shift
	//printf("testing char_at_index: large neg shift, expected = F, actual =  %c\n", char_at_index(test, -30, 5)); //fail


//testing index_of_char method:
	//positive shift less than the length of input
	//printf("testing index_of_char, expected = 25, actual =  %d\n", index_of_char(test, 4, 'F')); //pass
	//shift greater than the length of input
	//printf("testing index_of_char, expected = 26, actual =  %d\n", index_of_char(test, 30, 'F')); //pass
	//negative shift
	//printf("testing index_of_char, expected = 3, actual =  %d\n", index_of_char(test, -3, 'S')); //pass
	//large negative shift
	//printf("testing index_of_char, expected = 5, actual =  %d\n", index_of_char(test, -30, 'F')); //pass
	//printf("testing index_of_char, expected = 18, actual =  %d\n", index_of_char(test, -70, 'F'));
	//shift of 0
	//printf("testing index_of_char, expected = 2, actual =  %d\n", index_of_char(test, 0, 'F')); //pass


//testing cipher_substitution
	char code[] = " BCDEFGHIJKLMNOPQRSTUVWXYZA";
	char test1[] = "ECG";
	char results[4];
	//check all spaces
	char test2[] = "      ";
	char results2[7];
	//check decrypt
	char test3[] = "ABCDE";
	char results3[6];
	/*cipher_substitution(test1, results, code, ENCRYPT);
	printf("%s \n", results);
	cipher_substitution(test2, results2, code, ENCRYPT);
	printf("expected = AAAAAA, actual = %s \n", results2);
	cipher_substitution(test3, results3, code, DECRYPT);
	printf("expected = _BCDE, actual = %s \n", results3);*/

//testing cipher_caesar
	char testOne[] = "HELLO WORLD";
	char testOneR[12];
	//cipher_caesar(testOne, testOneR, 10, ENCRYPT);
	//printf("expected = ROVVY GYBVN, actual = %s \n", testOneR); : PASSED

	//cipher_caesar(test1, results, 3, ENCRYPT);
	//printf("expected = HFJ, actual = %s \n", results); : PASSED
	
	char testTwo[] = "THE COW JUMPED OVER THE MOOOOON";
	char testTwoR[32];
	cipher_caesar(testTwo, testTwoR, 25, ENCRYPT);
	printf("expected = SGD BNV ITLODC NUDQ SGD LNNNNNM, actual = %s\n", testTwoR);
	
	char resultsDE[4];
	char testDE[] = "HFJ";
	cipher_caesar(testDE, resultsDE, 3, DECRYPT);
	printf("expected = ECG, actual = %s\n", resultsDE);


//testing enigma cipher
	//without initial shift
	char inputE[] = "ABCD";
	char resultE[5];
	int keyE = 0;
	//cipher_enigma(inputE, resultE, keyE, ENCRYPT);
	//printf("enigma: no initial shift: expected = NRVZ, actual = %s \n", resultE);

	//with initial shift
	char inputE1[] = "ABCD";
	char resultE1[5];
	int keyE1 = 1235;
	//cipher_enigma(inputE1, resultE1, keyE1, ENCRYPT);
	//printf("enigma: small inital shift: expected = LPTX, actual = %s \n", resultE1);

	//decryption test
	char inputE4[] = "NRVZ";
	char results4[5];
	//cipher_enigma(inputE4, results4, keyE, DECRYPT);
	//printf("enigma decrypt test(0 initial shift): expected = ABCD, actual = %s\n", results4);

	char inputE3[] = "LPTX";
	char resultE3[5];
	int keyE3 = 1235;
	//cipher_enigma(inputE3, resultE3, keyE3, DECRYPT);
	//printf("enigma decrypt(w/ initial shift) expected = ABCD actual = %s \n", resultE3);

	//with intial shift greater than 27 : TODO fix
	char inputE2[] = "ABCD";
	char resultE2[5];
	int keyE2 = 5678;
	//cipher_enigma(inputE2, resultE2, keyE2, ENCRYPT);
	//printf("\nenigma: large initial shift: expected = UYBF actual = %s \n", resultE2);

	char final[] = "AZ";
	char resultsFinal[3];
	int keyFinal = 1210;
	//cipher_enigma(final, resultsFinal, keyFinal, ENCRYPT);
	//printf("expected = SH, actual = %s \n", resultsFinal); 

	// Get input for the user
	// The scanf formatting reads a string, including 
	// the blank spaces, until a newline is encountered
	// If you were to leave a blank space before the '%', would clear the buffer first
	
	/*printf("\n Enter a string: ");
	scanf("%[^\n]s",input);	
	printf(" The string you entered was: \"%s\"\n\n",input);*/	

	// Examples. They are commented out since the functions
	// are not implemented yet. They are included here to
	// illustrate the function  arguments and their use.
	//
	// Substition cipher: Encrypt the string 'input' and 
	//                    put the result in 'output'. Use 
	//                    'alphabet' as the key.
	//    cipher_substitution(input,output,alphabet,ENCRYPT);
	//
	// Caesar cipher:     Encrypt the string 'input' and 
	//                    put the result in 'output'. The
	//                    key is 3.
	//    cipher_caesar(input,output,3,ENCRYPT);
	//
	// Enigma cipher:     Encrypt the string 'input' and 
	//                    put the result in 'output'. The
	//                    key is 1304.
	//    cipher_enigma(input,output,1304,ENCRYPT);
	

}
