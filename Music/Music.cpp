#include "stdafx.h"

// http://gtwiki.2102.su/index.php?title=%D0%9D%D0%BE%D1%82%D1%8B_%D0%B8_%D1%87%D0%B0%D1%81%D1%82%D0%BE%D1%82%D0%B0

using namespace std;

int main()
{
	map<string, double> notes = { {"A4", 440}, {"A#4", 466.164}, {"B4", 493.883}, {"C5", 523.251}, {"C#5", 554.365}, {"D5", 587.330}, 
	{"D#5", 622.254}, {"E5", 659.255}, {"F5", 698.456}, {"F#5", 739.989}, {"G5", 783.991}, {"G#5", 830.609}, {"A5", 880} };

	Beep(880, 1000);
    return 0;
}