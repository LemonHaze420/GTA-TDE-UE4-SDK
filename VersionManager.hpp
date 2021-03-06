#pragma once

enum class eVersion {
	INVALID,

	III_V01_00,
	III_V01_01,

	VC_V01_00,
	VC_V01_01,

	SA_V01_00,
	SA_V01_01,

	Auto
};
enum class eGame {
	III,
	VC,
	SA,
	Unknown
};
struct Offsets {
	unsigned int objects = 0;
	unsigned int names = 0;
};
class GameDetails {
public:
	eGame game = eGame::Unknown;
	eVersion version = eVersion::INVALID;
	Offsets offsets;
};

// San Andreas
#define SA_V01_00_VER_STRING	0x42CF760
#define SA_V01_00_OBJECTS		0x4EC81B0	
#define SA_V01_00_NAMES			0x5554200

#define SA_V01_01_VER_STRING	0x42D0940
#define SA_V01_01_OBJECTS		0x4ECBCB0	
#define SA_V01_01_NAMES			0x5555200	

// Vice City
#define VC_V01_00_VER_STRING	0x4090008
#define VC_V01_00_OBJECTS		0x4C6CA50
#define VC_V01_00_NAMES			0x526AB80

#define VC_V01_01_VER_STRING	0x4092AF0
#define VC_V01_01_OBJECTS		0x4C73E60	
#define VC_V01_01_NAMES			0x526FB80	

// III
#define III_V01_00_VER_STRING	0x40399E0
#define III_V01_00_OBJECTS		0x4C1DB40
#define III_V01_00_NAMES		0x520FD40

#define III_V01_01_VER_STRING	0x403A438
#define III_V01_01_OBJECTS		0x4C21360
#define III_V01_01_NAMES		0x5211D40

// ++UE4+Release-4.26-CL-0
#define UE4_VERSION_STRING		"\x2B\x00\x2B\x00\x55\x00\x45\x00"

GameDetails GetGameDetails();