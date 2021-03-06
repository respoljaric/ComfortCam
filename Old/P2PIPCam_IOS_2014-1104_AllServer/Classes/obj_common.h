/*
 *  obj_common.h
 *  IpCameraClient
 *
 *  Created by jiyonglong on 12-4-26.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#define STR_MAC "mac"
#define STR_NAME "name"
#define STR_IPADDR "ipaddr"
#define STR_PORT "port"
#define STR_USER "user"
#define STR_PWD "pwd"
#define STR_IMG "img"
#define STR_DID "did"
#define STR_PPPP_STATUS "ppppstatus"
#define STR_PPPP_MODE "ppppmode"
#define STR_AUTHORITY "authority"
#define STR_ALARM "alarm"
#define STR_MODAL  "modal"

#define  USER_ADMIN 1
#define  USER_VISITOR 2
#define  USER_OPERATOR 3
#define  USER_NOTAUTHORITY 0


#define STR_SSID "ssid"
#define STR_MAC "mac"
#define STR_SECURITY "security"
#define STR_DB0 "db0"
#define STR_CHANNEL "channel"

#define STR_LOCALIZED_FILE_NAME "IpCameraClient"

#define COLOR_BASE_RED  119.0
#define COLOR_BASE_GREEN 119.0
#define COLOR_BASE_BLUE 119.0

#define COLOR_HIGH_LIGHT_RED 120
#define COLOR_HIGH_LIGHT_GREEN 120
#define COLOR_HIGH_LIGHT_BLUE 120

#define COLOR_IMAGEVIEW_RED 255
#define COLOR_IMAGEVIEW_GREEN 160
#define COLOR_IMAGEVIEW_BLUE 0


#define BTN_NORMAL_RED 0
#define BTN_NORMAL_GREEN 0x4e
#define BTN_NORMAL_BLUE 0x93

#define BTN_DONE_RED 0x13
#define BTN_DONE_GREEN 0x45
#define BTN_DONE_BLUE 0x70

#define CELL_SEPERATOR_RED 220
#define CELL_SEPERATOR_GREEN 220
#define CELL_SEPERATOR_BLUE 220

#define STR_VERSION_NO "1.1"

//---------------------------------------------------------------------------------------------
#define kPRODUCT_TYPE_MONTH @"SKU__01"
#define kPRODUCT_TYPE_YEAR @"SKU_02"
#define kPRODUCT_PURCHASE @"purchase product"

typedef struct _STRU_REC_FILE_HEAD
{
    int head;
    int version;
    int videoformat;
    int audioformat;
    int reserved;
    char szosd[44];
    
}STRU_REC_FILE_HEAD, *PSTRU_REC_FILE_HEAD;

typedef struct _STRU_DATA_HEAD
{
    int head;
    int format;
    int dataformat;
    int datalen;
    int timestamp;
    int timezone;
    int devicetime;
}STRU_DATA_HEAD,*PSTRU_DATA_HEAD;

typedef struct _STU_TM{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    
}STRU_TM,*PSTRU_TM;

enum SIGN_UP
{
    FirstName   = 0,
    LastName    = 1,
    Email       = 2,
    Phone       = 3,
    Password    = 4,
    ConfirmPass = 5,
    OldPassword = 6,
    NewPassword = 7,
    ConfirmEmail= 8
}SignUp;


inline static BOOL isEmailValid(NSString *emailString)
{
    if([emailString length]==0){
        return NO;
    }
    
    NSString *regExPattern = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    
    NSRegularExpression *regEx = [[NSRegularExpression alloc] initWithPattern:regExPattern options:NSRegularExpressionCaseInsensitive error:nil];
    NSUInteger regExMatches = [regEx numberOfMatchesInString:emailString options:0 range:NSMakeRange(0, [emailString length])];
    
    NSLog(@"%i", regExMatches);
    if (regExMatches == 0)
    {
        return NO;
    }
    else
    {
        return YES;
    }
    
}
