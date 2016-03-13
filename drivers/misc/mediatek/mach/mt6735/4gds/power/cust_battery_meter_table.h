#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             24000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,69709},
        {-15,54633},
        {-10,43155},
        { -5,34343},
        {  0,27523},
        {  5,22206},
        { 10,18031},
        { 15,14730},
        { 20,12103},
        { 25,10000},
        { 30,8306},
        { 35,6935},
        { 40,5818},
        { 45,4904},
        { 50,4152},
        { 55,3531},
        { 60,3016}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
  {0 , 4245},
  {1 , 4218},
  {3 , 4193},
  {4 , 4170},
  {5 , 4149},
  {6 , 4129},
  {8 , 4111},
  {9 , 4096},
  {10, 4081},
  {11, 4066},
  {13, 4048},
  {14, 4029},
  {15, 4012},
  {16, 3998},
  {18, 3985},
  {19, 3973},
  {20, 3963},
  {21, 3951},
  {23, 3939},
  {24, 3928},
  {25, 3914},
  {26, 3901},
  {28, 3888},
  {29, 3877},
  {30, 3867},
  {31, 3858},
  {33, 3850},
  {34, 3843},
  {35, 3837},
  {37, 3830},
  {38, 3825},
  {39, 3820},
  {40, 3814},
  {42, 3810},
  {43, 3805},
  {44, 3802},
  {45, 3798},
  {47, 3795},
  {48, 3793},
  {49, 3790},
  {50, 3788},
  {52, 3785},
  {53, 3782},
  {54, 3779},
  {55, 3775},
  {57, 3771},
  {58, 3765},
  {59, 3758},
  {60, 3751},
  {62, 3744},
  {63, 3737},
  {63, 3733},
  {64, 3730},
  {64, 3726},
  {65, 3724},
  {65, 3722},
  {65, 3720},
  {65, 3718},
  {66, 3716},
  {66, 3715},
  {66, 3714},
  {66, 3713},
  {66, 3712},
  {67, 3711},
  {67, 3710},
  {67, 3710},
  {67, 3709},
  {67, 3709},
  {67, 3708},
  {67, 3708},
  {67, 3707},
  {67, 3707},
  {68, 3707},
  {68, 3707},
  {68, 3706}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
  {0 , 4264},
  {2 , 4240},
  {3 , 4222},
  {5 , 4206},
  {6 , 4190},
  {8 , 4174},
  {9 , 4160},
  {11, 4145},
  {12, 4130},
  {14, 4116},
  {15, 4102},
  {17, 4090},
  {18, 4078},
  {20, 4064},
  {21, 4048},
  {23, 4032},
  {24, 4016},
  {26, 4002},
  {27, 3990},
  {29, 3979},
  {30, 3968},
  {32, 3957},
  {33, 3946},
  {35, 3934},
  {36, 3921},
  {38, 3906},
  {39, 3892},
  {41, 3880},
  {42, 3869},
  {44, 3860},
  {45, 3852},
  {47, 3845},
  {48, 3839},
  {50, 3833},
  {51, 3827},
  {53, 3821},
  {54, 3816},
  {56, 3811},
  {57, 3806},
  {59, 3802},
  {60, 3798},
  {62, 3794},
  {63, 3791},
  {65, 3788},
  {66, 3785},
  {68, 3784},
  {69, 3781},
  {71, 3778},
  {72, 3775},
  {74, 3772},
  {75, 3767},
  {77, 3761},
  {78, 3753},
  {80, 3745},
  {81, 3734},
  {83, 3723},
  {84, 3712},
  {86, 3705},
  {87, 3701},
  {89, 3698},
  {90, 3695},
  {92, 3691},
  {93, 3682},
  {95, 3656},
  {96, 3607},
  {97, 3578},
  {97, 3563},
  {97, 3552},
  {98, 3545},
  {98, 3538},
  {98, 3532},
  {98, 3528},
  {98, 3524},
  {98, 3520},
  {98, 3517}
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
  {0  , 4286},
  {1  , 4267},
  {3  , 4251},
  {4  , 4235},
  {6  , 4219},
  {7  , 4203},
  {9  , 4188},
  {10 , 4174},
  {12 , 4159},
  {13 , 4144},
  {14 , 4129},
  {16 , 4115},
  {17 , 4101},
  {19 , 4087},
  {20 , 4076},
  {22 , 4063},
  {23 , 4049},
  {25 , 4035},
  {26 , 4021},
  {27 , 4008},
  {29 , 3996},
  {30 , 3985},
  {32 , 3975},
  {33 , 3966},
  {35 , 3956},
  {36 , 3946},
  {38 , 3936},
  {39 , 3924},
  {40 , 3909},
  {42 , 3892},
  {43 , 3877},
  {45 , 3865},
  {46 , 3856},
  {48 , 3848},
  {49 , 3841},
  {51 , 3834},
  {52 , 3828},
  {53 , 3823},
  {55 , 3817},
  {56 , 3812},
  {58 , 3807},
  {59 , 3803},
  {61 , 3799},
  {62 , 3795},
  {64 , 3791},
  {65 , 3788},
  {66 , 3784},
  {68 , 3782},
  {69 , 3778},
  {71 , 3775},
  {72 , 3772},
  {74 , 3768},
  {75 , 3763},
  {77 , 3757},
  {78 , 3751},
  {79 , 3745},
  {81 , 3739},
  {82 , 3729},
  {84 , 3717},
  {85 , 3704},
  {87 , 3692},
  {88 , 3689},
  {90 , 3687},
  {91 , 3686},
  {92 , 3684},
  {94 , 3680},
  {95 , 3664},
  {97 , 3615},
  {98 , 3540},
  {100, 3431},
  {100, 3323},
  {100, 3323},
  {100, 3323},
  {100, 3323},
  {100, 3323}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
  {0  , 4289},
  {1  , 4271},
  {3  , 4255},
  {4  , 4239},
  {6  , 4223},
  {7  , 4207},
  {9  , 4192},
  {10 , 4177},
  {12 , 4162},
  {13 , 4147},
  {15 , 4133},
  {16 , 4118},
  {18 , 4104},
  {19 , 4089},
  {21 , 4076},
  {22 , 4063},
  {24 , 4050},
  {25 , 4036},
  {27 , 4023},
  {28 , 4010},
  {30 , 3998},
  {31 , 3987},
  {33 , 3976},
  {34 , 3965},
  {35 , 3954},
  {37 , 3944},
  {38 , 3933},
  {40 , 3921},
  {41 , 3906},
  {43 , 3889},
  {44 , 3876},
  {46 , 3866},
  {47 , 3857},
  {49 , 3849},
  {50 , 3842},
  {52 , 3835},
  {53 , 3829},
  {55 , 3823},
  {56 , 3817},
  {58 , 3812},
  {59 , 3806},
  {61 , 3801},
  {62 , 3797},
  {64 , 3793},
  {65 , 3788},
  {66 , 3784},
  {68 , 3780},
  {69 , 3774},
  {71 , 3764},
  {72 , 3756},
  {74 , 3751},
  {75 , 3746},
  {77 , 3740},
  {78 , 3733},
  {80 , 3728},
  {81 , 3721},
  {83 , 3711},
  {84 , 3699},
  {86 , 3686},
  {87 , 3677},
  {89 , 3675},
  {90 , 3674},
  {92 , 3672},
  {93 , 3669},
  {95 , 3662},
  {96 , 3631},
  {98 , 3572},
  {99 , 3489},
  {100, 3356},
  {100, 3356},
  {100, 3356},
  {100, 3356},
  {100, 3356},
  {100, 3356},
  {100, 3356}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0}
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
  {417, 4245},
  {417, 4218},
  {443, 4193},
  {470, 4170},
  {493, 4149},
  {510, 4129},
  {525, 4111},
  {538, 4096},
  {550, 4081},
  {562, 4066},
  {572, 4048},
  {577, 4029},
  {583, 4012},
  {592, 3998},
  {597, 3985},
  {602, 3973},
  {610, 3963},
  {613, 3951},
  {618, 3939},
  {623, 3928},
  {623, 3914},
  {625, 3901},
  {625, 3888},
  {628, 3877},
  {632, 3867},
  {635, 3858},
  {642, 3850},
  {647, 3843},
  {655, 3837},
  {660, 3830},
  {667, 3825},
  {675, 3820},
  {680, 3814},
  {687, 3810},
  {693, 3805},
  {703, 3802},
  {710, 3798},
  {720, 3795},
  {733, 3793},
  {748, 3790},
  {763, 3788},
  {778, 3785},
  {795, 3782},
  {812, 3779},
  {827, 3775},
  {842, 3771},
  {855, 3765},
  {867, 3758},
  {880, 3751},
  {892, 3744},
  {895, 3737},
  {888, 3733},
  {883, 3730},
  {877, 3726},
  {873, 3724},
  {872, 3722},
  {867, 3720},
  {863, 3718},
  {860, 3716},
  {858, 3715},
  {857, 3714},
  {855, 3713},
  {853, 3712},
  {852, 3711},
  {852, 3710},
  {850, 3710},
  {848, 3709},
  {848, 3709},
  {847, 3708},
  {847, 3708},
  {847, 3707},
  {845, 3707},
  {845, 3707},
  {845, 3707},
  {845, 3706}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
  {242, 4264},
  {242, 4240},
  {248, 4222},
  {252, 4206},
  {255, 4190},
  {257, 4174},
  {260, 4160},
  {263, 4145},
  {267, 4130},
  {270, 4116},
  {272, 4102},
  {275, 4090},
  {278, 4078},
  {285, 4064},
  {288, 4048},
  {292, 4032},
  {295, 4016},
  {297, 4002},
  {300, 3990},
  {303, 3979},
  {305, 3968},
  {307, 3957},
  {308, 3946},
  {308, 3934},
  {308, 3921},
  {303, 3906},
  {298, 3892},
  {298, 3880},
  {297, 3869},
  {297, 3860},
  {300, 3852},
  {303, 3845},
  {307, 3839},
  {312, 3833},
  {313, 3827},
  {317, 3821},
  {322, 3816},
  {325, 3811},
  {328, 3806},
  {333, 3802},
  {338, 3798},
  {343, 3794},
  {348, 3791},
  {353, 3788},
  {362, 3785},
  {373, 3784},
  {383, 3781},
  {395, 3778},
  {405, 3775},
  {417, 3772},
  {427, 3767},
  {435, 3761},
  {442, 3753},
  {452, 3745},
  {458, 3734},
  {467, 3723},
  {473, 3712},
  {483, 3705},
  {497, 3701},
  {515, 3698},
  {540, 3695},
  {570, 3691},
  {605, 3682},
  {633, 3656},
  {652, 3607},
  {630, 3578},
  {607, 3563},
  {587, 3552},
  {577, 3545},
  {565, 3538},
  {555, 3532},
  {548, 3528},
  {542, 3524},
  {535, 3520},
  {528, 3517}
};     
   
// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
  {110, 4286},
  {110, 4267},
  {112, 4251},
  {113, 4235},
  {113, 4219},
  {113, 4203},
  {113, 4188},
  {117, 4174},
  {117, 4159},
  {117, 4144},
  {118, 4129},
  {118, 4115},
  {120, 4101},
  {120, 4087},
  {123, 4076},
  {125, 4063},
  {127, 4049},
  {128, 4035},
  {130, 4021},
  {130, 4008},
  {132, 3996},
  {133, 3985},
  {135, 3975},
  {138, 3966},
  {140, 3956},
  {143, 3946},
  {147, 3936},
  {145, 3924},
  {140, 3909},
  {132, 3892},
  {125, 3877},
  {120, 3865},
  {118, 3856},
  {118, 3848},
  {118, 3841},
  {118, 3834},
  {120, 3828},
  {122, 3823},
  {122, 3817},
  {123, 3812},
  {125, 3807},
  {127, 3803},
  {128, 3799},
  {128, 3795},
  {128, 3791},
  {130, 3788},
  {130, 3784},
  {132, 3782},
  {130, 3778},
  {132, 3775},
  {132, 3772},
  {133, 3768},
  {132, 3763},
  {133, 3757},
  {132, 3751},
  {135, 3745},
  {137, 3739},
  {138, 3729},
  {138, 3717},
  {140, 3704},
  {135, 3692},
  {138, 3689},
  {142, 3687},
  {148, 3686},
  {155, 3684},
  {162, 3680},
  {165, 3664},
  {163, 3615},
  {173, 3540},
  {192, 3431},
  {205, 3323},
  {205, 3323},
  {205, 3323},
  {205, 3323},
  {205, 3323}
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
  {93 , 4289},
  {93 , 4271},
  {95 , 4255},
  {95 , 4239},
  {97 , 4223},
  {95 , 4207},
  {97 , 4192},
  {98 , 4177},
  {98 , 4162},
  {98 , 4147},
  {100, 4133},
  {100, 4118},
  {100, 4104},
  {100, 4089},
  {102, 4076},
  {103, 4063},
  {103, 4050},
  {103, 4036},
  {105, 4023},
  {107, 4010},
  {105, 3998},
  {107, 3987},
  {108, 3976},
  {110, 3965},
  {112, 3954},
  {113, 3944},
  {115, 3933},
  {117, 3921},
  {113, 3906},
  {105, 3889},
  {102, 3876},
  {100, 3866},
  {100, 3857},
  {98 , 3849},
  {98 , 3842},
  {98 , 3835},
  {100, 3829},
  {102, 3823},
  {102, 3817},
  {105, 3812},
  {103, 3806},
  {105, 3801},
  {107, 3797},
  {108, 3793},
  {107, 3788},
  {108, 3784},
  {110, 3780},
  {107, 3774},
  {102, 3764},
  {100, 3756},
  {102, 3751},
  {102, 3746},
  {102, 3740},
  {100, 3733},
  {103, 3728},
  {102, 3721},
  {102, 3711},
  {102, 3699},
  {103, 3686},
  {100, 3677},
  {103, 3675},
  {107, 3674},
  {108, 3672},
  {110, 3669},
  {112, 3662},
  {110, 3631},
  {113, 3572},
  {120, 3489},
  {127, 3356},
  {127, 3356},
  {127, 3356},
  {127, 3356},
  {127, 3356},
  {127, 3356},
  {127, 3356}
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0},
  {0 , 0}
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
