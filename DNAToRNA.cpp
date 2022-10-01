// Transcribe the given DNA strand into corresponding mRNA - a type of RNA, that will be formed from DNA after transcription.
// DNA has the bases A, T, G and C, while RNA converts to U, A, C and G respectively.

// Examples
// dnaToRna("ATTAGCGCGATATACGCGTAC") ➞ "UAAUCGCGCUAUAUGCGCAUG"

// dnaToRna("CGATATA") ➞ "GCUAUAU"

// dnaToRna("GTCATACGACGTA") ➞ "CAGUAUGCUGCAU"

// Notes
// Transcription is the process of making complementary strand.
// A, T, G and C in DNA converts to U, A, C and G respectively in mRNA.

#include <iostream>
using namespace std;

std::string dnaToRna(std::string dna)
{
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'A')
        {
            dna[i] = 'U';
        }
        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        else if (dna[i] == 'G')
        {
            /* code */
            dna[i] = 'C';
        }
        else
        {
            dna[i] = 'G';
        }
    }
    return dna;
}

int main()
{
    cout << dnaToRna("ATTAGCGCGATATACGCGTAC")<<endl;
    cout << dnaToRna("CGATATA")<<endl;
    cout << dnaToRna("GTCATACGACGTA");

    return 0;
}