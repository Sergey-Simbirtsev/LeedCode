class Solution {
public:
    string intToRoman(int num) 
    {
        map<int, string> dictionary;
dictionary[0] = "";
dictionary[1] = "I";
dictionary[2] = "II";
dictionary[3] = "III";
dictionary[4] = "IV";
dictionary[5] = "V";
dictionary[6] = "VI";
dictionary[7] = "VII";
dictionary[8] = "VIII";
dictionary[9] = "IX";
dictionary[10] = "X";
dictionary[20] = "XX";
dictionary[30] = "XXX";
dictionary[40] = "XL";
dictionary[50] = "L";
dictionary[60] = "LX";
dictionary[70] = "LXX";
dictionary[80] = "LXXX";
dictionary[90] = "XC";
dictionary[100] = "C";
dictionary[200] = "CC";
dictionary[300] = "CCC";
dictionary[400] = "CD";
dictionary[500] = "D";
dictionary[600] = "DC";
dictionary[700] = "DCC";
dictionary[800] = "DCCC";
dictionary[900] = "CM";
dictionary[1000] = "M";
dictionary[2000] = "MM";
dictionary[3000] = "MMM";
string res;
res = dictionary[num / 1000 * 1000] + dictionary[num / 100 % 10 * 100] + dictionary[(num / 10 * 10) % 100] + dictionary[num % 10];
return res;
    }
};