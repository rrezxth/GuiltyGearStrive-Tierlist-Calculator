// Guilty Gear: Strive PATCH 2.05
// UPDATED: April 6th, 2023

#include <iostream>
#include <vector>
#include <numeric>
#include <map>
using namespace std;

void Print(const std::vector<string>& v) {
    for (auto& i : v)
        std::cout << i << '\n';
}

int main()
{
    const int numTierList = 3;
    const int numCharacters = 22;
 
    // Initialize characters
    double Sol = 0;
    double Ky = 0;
    double May = 0;
    double Axl = 0;
    double Chipp = 0;
    double Potemkin = 0;
    double Faust = 0;
    double Millia = 0;
    double Zato = 0;
    double Ramlethal = 0;
    double Leo = 0;
    double Nagoriyuki = 0;
    double Giovanna = 0;
    double Anji = 0;
    double Ino = 0;
    double Goldlewis = 0;
    double Jacko = 0;
    double HappyChaos = 0;
    double Baiken = 0;
    double Testament = 0;
    double Bridget = 0;
    double Sin = 0;

    // SIN Patch -- Save for future use
    /* { Sol, Ky, May, Axl, Chipp, Potemkin, Faust, Millia, Zato, Ramlethal, Leo, Nagoriyuki,
        Giovanna, Anji, Ino, Goldlewis, Jacko, HappyChaos, Baiken, Testament, Bridget, Sin };*/
    double lordKnight[numCharacters] = { 2, 3, 1, 3, 2, 4, 3, 4, 2, 2, 1, 1,
                            2, 3, 4, 3, 2, 1, 2, 3, 2, 4 };
    double hotashi[numCharacters] = { 3, 3, 1, 3, 2, 3, 3, 2, 2, 1, 1, 2,
                            2, 3, 2, 3, 1, 1, 2, 2, 2, 4 };
    double squirrel[numCharacters] = { 2, 3, 1, 2, 1, 4, 3, 3, 2, 1, 1, 1,
                            1, 2, 3, 2, 1, 1, 1, 2, 1, 4 };

    // gg[CHARACTER][TIERLIST]
    double gg[numCharacters][numTierList] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
                        {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

    // Insert values from tier list to gg[][] arr
    for (int i = 0; i < numCharacters; i++)
    {
        gg[i][0] = lordKnight[i];
        gg[i][1] = hotashi[i];
        gg[i][2] = squirrel[i];
    }
    
    // Calculate
    for (int i = 0; i < numTierList; i++)
    {
        Sol = Sol + gg[0][i];
        Ky = Ky + gg[1][i];
        May = May + gg[2][i];
        Axl = Axl + gg[3][i];
        Chipp = Chipp + gg[4][i];
        Potemkin = Potemkin + gg[5][i];
        Faust = Faust + gg[6][i];
        Millia = Millia + gg[7][i];
        Zato = Zato + gg[8][i];
        Ramlethal = Ramlethal + gg[9][i];
        Leo = Sol + gg[10][i];
        Nagoriyuki = Sol + gg[11][i];
        Giovanna = Giovanna + gg[12][i];
        Anji = Anji + gg[13][i];
        Ino = Ino + gg[14][i];
        Goldlewis = Goldlewis + gg[15][i];
        Jacko = Jacko + gg[16][i];
        HappyChaos = HappyChaos + gg[17][i];
        Baiken = Baiken + gg[18][i];
        Testament = Testament + gg[19][i];
        Bridget = Bridget + gg[20][i];
        Sin = Sin + gg[21][i];
    }

    // Divide total by the numberOfTierLists
    Sol = Sol / numTierList;
    Ky = Ky / numTierList;
    May = May / numTierList;
    Axl = Axl / numTierList;
    Chipp = Chipp / numTierList;
    Potemkin = Potemkin / numTierList;
    Faust = Faust / numTierList;
    Millia = Millia / numTierList;
    Zato = Zato / numTierList;
    Ramlethal = Ramlethal / numTierList;
    Leo = Leo / numTierList;
    Nagoriyuki = Nagoriyuki / numTierList;
    Giovanna = Giovanna / numTierList;
    Anji = Anji / numTierList;
    Ino = Ino / numTierList;
    Goldlewis = Goldlewis / numTierList;
    Jacko = Jacko / numTierList;
    HappyChaos = HappyChaos / numTierList;
    Baiken = Baiken / numTierList;
    Testament = Testament / numTierList;
    Bridget = Bridget / numTierList;
    Sin = Sin / numTierList;

    // Map numbers to character_value
    map<int, double> int_double =
    {

        {0, Sol},
        {1, Ky},
        {2, May},
        {3, Axl},
        {4, Chipp},
        {5, Potemkin},
        {6, Faust},
        {7, Millia},
        {8, Zato},
        {9, Ramlethal},
        {10, Leo},
        {11, Nagoriyuki},
        {12, Giovanna},
        {13, Anji},
        {14, Ino},
        {15, Goldlewis},
        {16, Jacko},
        {17, HappyChaos},
        {18, Baiken},
        {19, Testament},
        {20, Bridget},
        {21, Sin},
    };

    // Map int to character_string
    map<int, string> int_string =
    {

        { 0, "Sol"},
        { 1, "Ky"},
        { 2, "May"},
        { 3, "Axl"},
        { 4, "Chipp"},
        { 5, "Potemkin"},
        { 6, "Faust"},
        { 7, "Millia"},
        { 8, "Zato"},
        { 9, "Ramlethal"},
        { 10, "Leo"},
        { 11, "Nagoriyuki"},
        { 12, "Giovanna"},
        { 13, "Anji"},
        { 14, "Ino"},
        { 15, "Goldlewis"},
        { 16, "Jacko"},
        { 17, "HappyChaos"},
        { 18, "Baiken"},
        { 19, "Testament"},
        { 20, "Bridget"},
        { 21, "Sin"},
    };

    vector<string> tier1;
    vector<string> tier2;
    vector<string> tier3;
    vector<string> tier4;


    for (int i = 0; i < numCharacters; i++)
    {
        if (int_double[i] < 1.4)
        {
            tier1.push_back(int_string[i]);
        }
        else if (int_double[i] < 2.4)
        {
            tier2.push_back(int_string[i]);
        }
        else if (int_double[i] < 3.5)
        {
            tier3.push_back(int_string[i]);
        }
        else
        {
            tier4.push_back(int_string[i]);
        }
    }

    std::cout << endl;
    std::cout << "S-Tier" << endl;
    Print(tier1);

    std::cout << endl;
    std::cout << "A-Tier" << endl;
    Print(tier2);

    std::cout << endl;
    std::cout << "B-Tier" << endl;
    Print(tier3);

    std::cout << endl;
    std::cout << "C-Tier" << endl;
    Print(tier4);
    

    return 0;

}
