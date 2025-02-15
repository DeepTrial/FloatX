
#include <string>
#include <vector>

namespace TEST_FP8_DATA {


const std::vector<float> FP8_E4M3_INPUT = {
    -164.57446,  343.05902,   446.26245,   -215.418,   211.72885,
    430.89838,   245.04832,   -257.5658,   423.7528,   242.71921,
    124.78271,   44.735435,   -63.103195,  186.83022,  -183.2897,
    238.51128,   224.5601,    -101.6719,   258.25336,  -408.07285,
    44.36699,    -264.58252,  -181.05171,  -236.13425, -277.3276,
    430.02716,   -111.78848,  -223.55731,  150.49562,  -228.41165,
    192.56401,   152.04932,   417.40424,   -215.54994, -76.249054,
    104.79125,   -92.61909,   310.3982,    -366.9554,  -299.78714,
    -433.24832,  316.98978,   -308.48807,  -200.42065, -334.1033,
    -190.05423,  78.764366,   -32.8338,    330.76254,  -35.813534,
    192.96011,   -86.94259,   -426.5993,   -235.7479,  -434.31424,
    363.13528,   -25.938791,  107.66217,   363.20657,  -27.721058,
    -158.93405,  56.969524,   262.89484,   290.0921,   402.73285,
    -168.25163,  94.37964,    -421.18018,  -221.9715,  98.36312,
    -319.8569,   -421.04672,  -378.8545,   154.32253,  58.176147,
    425.9316,    -318.24313,  152.22774,   -189.9851,  85.377,
    353.19376,   130.7343,    35.202568,   -80.8839,   -250.4654,
    370.12595,   427.21216,   378.213,     135.59077,  -129.43062,
    390.70352,   388.54654,   -240.08907,  -185.9105,  -7.7531633,
    210.53474,   -224.43274,  -429.05542,  412.6661,   -51.82949,
    -286.20285,  324.32812,   -98.3843,    -356.25906, -15.02122,
    30.381037,   285.04462,   8.502911,    -0.3424719, 359.22748,
    261.45816,   -308.80957,  142.50809,   73.80792,   434.90396,
    -8.530981,   117.82424,   -348.77496,  -329.99792, 395.09015,
    -63.478306,  133.76773,   -239.00363,  88.52439,   -333.514,
    302.4731,    -234.3065,   -39.71248,   -404.00793, 317.9303,
    191.92554,   -174.77802,  -354.25183,  324.76343,  329.86374,
    303.48807,   219.29796,   363.3935,    355.42514,  316.5477,
    127.72394,   -337.9184,   109.15465,   -141.63676, 349.1966,
    178.40428,   -9.00689,    5.168788,    -368.93185, -15.500813,
    -408.69376,  -128.91231,  -253.53152,  -122.80288, -235.61658,
    -233.12103,  366.18118,   444.86008,   3.5472698,  391.87997,
    245.20938,   362.88092,   357.5472,    72.47497,   271.8276,
    235.437,     -350.0874,   182.66869,   313.77283,  -315.94318,
    240.93492,   -439.6888,   -263.47693,  16.259876,  319.80655,
    -403.62384,  -402.97495,  -434.35907,  207.34299,  -233.11499,
    -436.49384,  5.9492474,   380.97757,   -248.32738, 44.209587,
    364.9318,    -103.76583,  -252.33017,  65.61542,   -200.12921,
    137.37524,   -270.12473,  174.21817,   355.07443,  201.73755,
    -397.82886,  -7.2826457,  21.966663,   320.41858,  164.1229,
    -252.13982,  -79.70972,   382.61734,   288.18448,  -319.16367,
    6.71879,     79.21764,    333.53094,   -398.1779,  -20.727325,
    -393.14154,  29.602343,   -65.29242,   -225.7684,  -92.72308,
    424.60852,   -15.537481,  167.55392,   -310.2186,  36.82642,
    101.27243,   -112.372215, 176.68924,   57.395897,  197.8816,
    -271.94275,  -256.7299,   163.9801,    377.1392,   -160.74612,
    -106.31311,  326.82065,   59.685204,   179.46774,  192.95538,
    217.91656,   -278.29593,  100.700905,  33.573395,  -203.3949,
    264.39484,   -301.00168,  -164.79045,  298.78552,  -6.932601,
    212.36209,   -59.436497,  -447.46472,  398.04166,  296.4968,
    -109.508286, -305.2946,   -406.06204,  313.2626,   -253.60532,
    -402.57162,  132.70882,   90.45106,    -266.37708, 437.8406,
    356.4395,    132.47557,   110.21643,   173.2878,   -175.74445,
    -376.23026,  132.59155,   -130.63406,  -293.7327,  311.32043,
    414.10297,   -202.88249,  124.402534,  267.15765,  -401.20032,
    70.90704,    -150.19354,  439.8225,    -221.1891,  -279.5327,
    -437.39023,  -269.82056,  414.3122,    -370.04916, -313.95343,
    307.6207,    418.1403,    131.73665,   321.41678,  191.04582,
    446.29977,   -384.09033,  118.30761,   -102.74821, -55.761543,
    -381.68756,  129.50879,   -353.28735,  108.77265,  -309.9133,
    -25.550978,  -247.25923,  -54.979908,  169.07315,  274.11234,
    359.81015,   -126.29572,  295.90613,   -374.31967, 141.39922,
    23.343452,   -198.01036,  56.933296,   -9.8817625, -215.37521,
    198.69426,   -211.90839,  -327.2032,   9.399515,   9.398449,
    -183.35806,  -127.93829,  -173.62663,  153.04366,  -268.53836,
    -365.83884,  72.81729,    -233.59743,  293.21564,  311.15454,
    189.049,     316.7268,    -88.66342,   -182.28459, -277.4136,
    -258.23026,  235.1342,    -408.7597,   -314.0774,  -258.85144,
    -336.14963,  434.75552,   353.5505,    -179.35918, -262.03763,
    -264.92767,  300.2357,    66.52036,    278.65927,  -150.75974,
    -391.58582,  97.16343,    -86.53618,   256.20102,  378.32944,
    -275.56653,  209.77968,   0.6018323,   -59.964226, 227.62016,
    172.74191,   349.40167,   -91.66192,   -32.16113,  191.39713,
    -174.0186,   -104.29158,  -107.17449,  338.34335,  126.564575,
    -104.256,    138.87851,   -98.430756,  -44.793728, 282.31116,
    -276.6686,   343.448,     -206.08368,  339.16708,  395.2245,
    291.1682,    282.372,     -222.01375,  -164.54704, -183.33386,
    399.98633,   16.75454,    -285.00967,  -8.834308,  243.3169,
    -59.609303,  218.21825,   -269.615,    -233.62086, 371.43896,
    -214.47324,  64.38775,    -295.53073,  65.26409,   270.18396,
    221.11853,   -24.846483,  -260.83212,  68.12215,   127.07864,
    -161.65656,  -86.030754,  -132.93799,  -254.62488, -58.821003,
    283.5333,    426.63718,   -428.64432,  -241.48775, -156.41241,
    -0.92734265, 99.339005,   -125.43191,  -22.389736, -424.599,
    -249.30515,  76.154785,   108.73646,   -312.0777,  -426.49637,
    -209.73584,  -231.80466,  379.97467,   -105.37976, 281.3435,
    -433.9511,   294.5991,    426.7663,    -95.34527,  335.3745,
    -75.71513,   218.74179,   -417.42538,  190.16264,  -310.50186,
    -411.93204,  -90.53692,   339.12805,   240.57405,  -193.95659,
    -263.82803,  -332.2527,   -203.3422,   99.741035,  -297.91757,
    226.46683,   -193.93176,  -308.58282,  349.18634,  418.14926,
    268.08514,   373.1929,    447.7312,    -30.830887, -99.246735,
    382.4571,    18.661303,   165.96124,   42.936893,  -184.40126,
    360.62527,   -37.421227,  296.12457,   32.369244,  213.8118,
    -151.0286,   -322.54907,  -353.81372,  377.32803,  -398.65503,
    224.78899,   -188.6823,   224.80687,   23.750711,  261.1928,
    177.49472,   -39.014236,  191.25108,   183.77834,  -14.212895,
    336.9297,    163.63458,   203.77391,   -19.579828, -4.4453893,
    -99.96965,   276.4037,    63.073475,   162.97234,  -94.15059,
    -239.85687,  226.75493,   407.53873,   -407.73486, 395.00732,
    -145.57523,  -174.88069,  -283.2805,   337.39056,  -288.6754,
    330.70187,   -423.5105,   -281.20947,  374.5535,   194.91438,
    394.44794,   31.342724,   -225.71289,  117.83867,  -404.61105,
    -111.9707,   -428.01236,  -94.27666,   61.214565,  -161.5134,
    337.6018,    -264.2531,   -223.17621,  261.65564,  -265.43808,
    -188.84094,  275.90546,   -10.431324,  -26.624603, 4.551032,
    -356.91455,  91.32028,    87.85099,    -260.4551,  -124.52226,
    -44.668385,  140.97122,   -324.60175,  -412.78653, -280.4312,
    -11.8644495, -275.50308,  -248.88094,  -218.24673, 375.56955,
    -12.813766,  399.19653,   302.16528,   104.13811,  421.05124,
    121.96969,   -354.07056,  -89.31627,   274.23703,  139.08328,
    250.68765,   319.06516,   -119.627396, 352.3674,   32.358593,
    397.31577,   373.4119,    181.46082,   -214.09647, -266.92792,
    -402.60468,  -214.95613,  -244.62357,  2.2511024,  442.67758,
    -233.6856,   -259.08786,  -275.33728,  290.81332,  440.3044,
    178.49446,   -38.2366,    -192.22829,  -420.29593, 224.84755,
    265.3711,    183.99666,   157.31964,   62.952034,  -86.99237,
    353.74963,   349.76495,   -206.96658,  -320.04086, -192.36438,
    4.579401,    213.32266,   -1.469437,   -97.64799,  -276.46124,
    186.84166,   -149.57048,  4.3859777,   -286.30698, -361.49725,
    212.5552,    399.3883,    263.1495,    305.7136,   303.98636,
    84.45391,    -380.92807,  22.556917,   374.7798,   -21.587889,
    -147.02568,  222.75632,   -396.72385,  -229.57704, -25.305374,
    -264.9923,   -119.339096, 323.20718,   403.34494,  -97.4515,
    -434.59573,  -122.224495, -213.10033,  173.32463,  -184.92514,
    92.76339,    -265.40024,  70.97358,    426.5534,   19.556282,
    -270.21155,  -317.37473,  -76.5636,    -395.88617, -289.1007,
    -226.5497,   -347.7732,   88.74106,    383.34424,  438.73624,
    229.28586,   272.8666,    -41.412792,  -399.39178, 190.46036,
    -83.67725,   103.39554,   -234.0919,   -310.77402, -259.1446,
    21.6603,     171.00223,   -326.33002,  133.87749,  -447.12778,
    -39.971268,  122.55856,   273.64648,   -22.879667, -336.94107,
    -77.58834,   21.538456,   34.75919,    -72.69163,  -336.5137,
    -272.10495,  -199.82964,  56.141567,   -416.25482, 322.83804,
    -324.9737,   58.24188,    -176.37595,  152.6239,   132.48631,
    -404.3747,   -400.4654,   -52.595577,  -178.86725, 41.854454,
    -400.06808,  12.777071,   2.441228,    314.34253,  -444.2121,
    -270.02216,  -199.3119,   352.33243,   10.336996,  320.26883,
    -432.8509,   316.26663,   -287.60977,  300.82843,  -226.03351,
    315.29443,   -209.22244,  -364.58282,  255.36133,  266.21976,
    -419.24237,  -321.55887,  -122.38549,  301.78143,  -298.1084,
    78.9588,     -333.72726,  -126.07455,  -215.09767, 85.45406,
    -136.82742,  405.7888,    -174.70499,  138.34872,  399.6674,
    -115.50074,  -198.13779,  -40.887917,  102.025406, 382.05823,
    -370.9369,   -243.42221,  -59.784916,  150.68494,  -260.5188,
    -383.16962,  238.33408,   -418.49094,  342.94925,  442.69223,
    208.5183,    -364.7607,   -415.10638,  443.8319,   361.02045,
    -20.213852,  158.82564,   192.69594,   -337.15433, -312.74112,
    267.69122,   -205.0806,   199.2097,    193.92581,  349.23386,
    -338.72113,  208.70772,   -107.10624,  -361.33835, 149.5696,
    -205.10759,  228.50883,   54.694866,   -179.67513, 361.6368,
    153.29887,   0.5558553,   308.59637,   -367.4363,  127.63555,
    -149.9172,   107.52707,   241.8719,    -105.68385, 389.23746,
    -234.92535,  -191.4171,   -250.64336,  -358.21884, -134.9484,
    -239.87973,  -56.416756,  0.8159143,   -9.205755,  -236.5557,
    -340.39566,  -203.54068,  207.16193,   -72.85776,  -49.3862,
    -41.33214,   190.66629,   257.87973,   107.744995, 40.902493,
    109.005264,  250.45276,   241.62047,   199.32944,  -134.23007,
    220.78867,   -384.7075,   -78.287315,  -12.515496, -235.85432,
    -424.39224,  71.39977,    -285.42163,  51.7283,    -174.0869,
    365.86774,   -225.06834,  24.654697,   348.51404,  71.49363,
    222.69489,   108.288246,  -207.16927,  -129.12505, 134.58266,
    -35.78041,   37.59542,    -235.79056,  -272.29367, 228.85655,
    28.449385,   -98.835335,  -94.93892,   -407.80704, -276.14075,
    -447.26514,  -34.005035,  63.282166,   266.9945,   -280.2239,
    13.085885,   -417.08255,  44.685562,   55.291267,  125.06845,
    -418.96783,  381.9566,    -208.11125,  -434.3247,  -320.8788,
    -229.99767,  -117.91353,  -128.74889,  426.87173,  -142.60286,
    -264.54926,  -137.11197,  -266.75397,  1.6486428,  315.28012,
    -28.798903,  36.992664,   -288.88513,  -247.16481, -269.37027,
    327.3915,    -120.786194, -378.19577,  -434.53735, -398.66998,
    -167.80392,  55.5186,     -166.71642,  -217.37161, 231.83948,
    -107.287865, 358.3038,    203.93501,   -324.38193, 10.390022,
    -78.13594,   -423.79016,  -65.16537,   -123.28331, -380.66235,
    -229.14003,  -440.57446,  -16.628988,  272.4896,   434.128,
    -83.96786,   139.9816,    -12.868427,  -223.69792, 286.78488,
    -16.701689,  -287.89746,  57.844723,   332.61365,  308.6932,
    267.6318,    265.1864,    165.33243,   -208.48105, -366.56638,
    286.77536,   225.74612,   -190.05113,  344.74152,  -47.628143,
    198.649,     293.73193,   -438.3004,   -172.98518, -277.24048,
    10.007778,   -392.4285,   -135.12044,  439.4852,   113.46407,
    -42.77899,   -67.88995,   67.63396,    261.51703,  344.39435,
    318.38815,   -235.64012,  409.7066,    325.95602,  -362.2907,
    -357.19962,  365.2997,    411.36603,   276.04053,  -78.557755,
    68.055176,   -231.75024,  223.26666,   225.08223,  285.01843,
    -225.09969,  178.4772,    292.26083,   330.79788,  370.7511,
    -419.1246,   -400.92133,  -142.8302,   293.15277,  -363.70682,
    -79.739494,  -417.3938,   -21.263494,  -78.9189,   -202.36404,
    -419.37766,  -99.9103,    -446.5852,   272.42206,  0.28883338,
    196.4739,    -409.06326,  220.62828,   -345.70624, 72.02458,
    119.55469,   -395.47824,  137.02132,   186.98494,  -230.54544,
    -40.618572,  154.7864,    -391.5672,   -398.5078,  342.95,
    -390.79187,  -38.716766,  196.57526,   -144.9169,  -46.441536,
    114.30807,   -361.9734,   -119.69545,  324.67874,  -159.89624,
    -75.70533,   -340.39,     -36.28294,   -305.16226, 129.5986,
    -223.37141,  -126.494644, -93.66583,   400.74786,  340.0794,
    358.17892,   249.41862,   -413.30478,  -253.05998, 268.55447,
    -72.425545,  -19.818258,  -17.928896,  -142.12563, 411.8632,
    -420.07455,  249.27487,   -169.8126,   -385.83807, 365.2267,
    296.36746,   -78.701706,  412.29483,   -139.72467, -266.37384};

const std::vector<std::string> FP8_E4M3_GOLDEN = {
    "-160",    "inf",  "inf",  "-208",  "208",      "inf",   "240",  "-inf",
    "inf",     "240",  "128",  "44",    "-64",      "192",   "-176", "240",
    "224",     "-104", "inf",  "-inf",  "44",       "-inf",  "-176", "-240",
    "-inf",    "inf",  "-112", "-224",  "144",      "-224",  "192",  "160",
    "inf",     "-208", "-80",  "104",   "-96",      "inf",   "-inf", "-inf",
    "-inf",    "inf",  "-inf", "-208",  "-inf",     "-192",  "80",   "-32",
    "inf",     "-36",  "192",  "-88",   "-inf",     "-240",  "-inf", "inf",
    "-26",     "104",  "inf",  "-28",   "-160",     "56",    "inf",  "inf",
    "inf",     "-176", "96",   "-inf",  "-224",     "96",    "-inf", "-inf",
    "-inf",    "160",  "60",   "inf",   "-inf",     "160",   "-192", "88",
    "inf",     "128",  "36",   "-80",   "-inf",     "inf",   "inf",  "inf",
    "128",     "-128", "inf",  "inf",   "-240",     "-192",  "-8",   "208",
    "-224",    "-inf", "inf",  "-52",   "-inf",     "inf",   "-96",  "-inf",
    "-15",     "30",   "inf",  "9",     "-0.34375", "inf",   "inf",  "-inf",
    "144",     "72",   "inf",  "-9",    "120",      "-inf",  "-inf", "inf",
    "-64",     "128",  "-240", "88",    "-inf",     "inf",   "-240", "-40",
    "-inf",    "inf",  "192",  "-176",  "-inf",     "inf",   "inf",  "inf",
    "224",     "inf",  "inf",  "inf",   "128",      "-inf",  "112",  "-144",
    "inf",     "176",  "-9",   "5",     "-inf",     "-16",   "-inf", "-128",
    "-inf",    "-120", "-240", "-240",  "inf",      "inf",   "3.5",  "inf",
    "240",     "inf",  "inf",  "72",    "inf",      "240",   "-inf", "176",
    "inf",     "-inf", "240",  "-inf",  "-inf",     "16",    "inf",  "-inf",
    "-inf",    "-inf", "208",  "-240",  "-inf",     "6",     "inf",  "-inf",
    "44",      "inf",  "-104", "-inf",  "64",       "-208",  "144",  "-inf",
    "176",     "inf",  "208",  "-inf",  "-7.5",     "22",    "inf",  "160",
    "-inf",    "-80",  "inf",  "inf",   "-inf",     "6.5",   "80",   "inf",
    "-inf",    "-20",  "-inf", "30",    "-64",      "-224",  "-96",  "inf",
    "-16",     "160",  "-inf", "36",    "104",      "-112",  "176",  "56",
    "192",     "-inf", "-inf", "160",   "inf",      "-160",  "-104", "inf",
    "60",      "176",  "192",  "224",   "-inf",     "104",   "32",   "-208",
    "inf",     "-inf", "-160", "inf",   "-7",       "208",   "-60",  "-inf",
    "inf",     "inf",  "-112", "-inf",  "-inf",     "inf",   "-inf", "-inf",
    "128",     "88",   "-inf", "inf",   "inf",      "128",   "112",  "176",
    "-176",    "-inf", "128",  "-128",  "-inf",     "inf",   "inf",  "-208",
    "128",     "inf",  "-inf", "72",    "-144",     "inf",   "-224", "-inf",
    "-inf",    "-inf", "inf",  "-inf",  "-inf",     "inf",   "inf",  "128",
    "inf",     "192",  "inf",  "-inf",  "120",      "-104",  "-56",  "-inf",
    "128",     "-inf", "112",  "-inf",  "-26",      "-240",  "-56",  "176",
    "inf",     "inf",  "-128", "inf",   "-inf",     "144",   "24",   "-192",
    "56",      "-10",  "-208", "192",   "-208",     "-inf",  "9",    "9",
    "-176",    "-128", "-176", "160",   "-inf",     "-inf",  "72",   "-240",
    "inf",     "inf",  "192",  "inf",   "-88",      "-176",  "-inf", "-inf",
    "240",     "-inf", "-inf", "-inf",  "-inf",     "inf",   "inf",  "-176",
    "-inf",    "-inf", "inf",  "64",    "inf",      "-144",  "-inf", "96",
    "-88",     "inf",  "inf",  "-inf",  "208",      "0.625", "-60",  "224",
    "176",     "inf",  "-88",  "-32",   "192",      "-176",  "-104", "-104",
    "inf",     "128",  "-104", "144",   "-96",      "-44",   "inf",  "-inf",
    "inf",     "-208", "inf",  "inf",   "inf",      "inf",   "-224", "-160",
    "-176",    "inf",  "16",   "-inf",  "-9",       "240",   "-60",  "224",
    "-inf",    "-240", "inf",  "-208",  "64",       "-inf",  "64",   "inf",
    "224",     "-24",  "-inf", "72",    "128",      "-160",  "-88",  "-128",
    "-inf",    "-60",  "inf",  "inf",   "-inf",     "-240",  "-160", "-0.9375",
    "96",      "-128", "-22",  "-inf",  "-inf",     "80",    "112",  "-inf",
    "-inf",    "-208", "-224", "inf",   "-104",     "inf",   "-inf", "inf",
    "inf",     "-96",  "inf",  "-72",   "224",      "-inf",  "192",  "-inf",
    "-inf",    "-88",  "inf",  "240",   "-192",     "-inf",  "-inf", "-208",
    "96",      "-inf", "224",  "-192",  "-inf",     "inf",   "inf",  "inf",
    "inf",     "inf",  "-30",  "-96",   "inf",      "18",    "160",  "44",
    "-192",    "inf",  "-36",  "inf",   "32",       "208",   "-144", "-inf",
    "-inf",    "inf",  "-inf", "224",   "-192",     "224",   "24",   "inf",
    "176",     "-40",  "192",  "176",   "-14",      "inf",   "160",  "208",
    "-20",     "-4.5", "-96",  "inf",   "64",       "160",   "-96",  "-240",
    "224",     "inf",  "-inf", "inf",   "-144",     "-176",  "-inf", "inf",
    "-inf",    "inf",  "-inf", "-inf",  "inf",      "192",   "inf",  "32",
    "-224",    "120",  "-inf", "-112",  "-inf",     "-96",   "60",   "-160",
    "inf",     "-inf", "-224", "inf",   "-inf",     "-192",  "inf",  "-10",
    "-26",     "4.5",  "-inf", "88",    "88",       "-inf",  "-128", "-44",
    "144",     "-inf", "-inf", "-inf",  "-12",      "-inf",  "-inf", "-224",
    "inf",     "-13",  "inf",  "inf",   "104",      "inf",   "120",  "-inf",
    "-88",     "inf",  "144",  "inf",   "inf",      "-120",  "inf",  "32",
    "inf",     "inf",  "176",  "-208",  "-inf",     "-inf",  "-208", "-240",
    "2.25",    "inf",  "-240", "-inf",  "-inf",     "inf",   "inf",  "176",
    "-40",     "-192", "-inf", "224",   "inf",      "176",   "160",  "64",
    "-88",     "inf",  "inf",  "-208",  "-inf",     "-192",  "4.5",  "208",
    "-1.5",    "-96",  "-inf", "192",   "-144",     "4.5",   "-inf", "-inf",
    "208",     "inf",  "inf",  "inf",   "inf",      "88",    "-inf", "22",
    "inf",     "-22",  "-144", "224",   "-inf",     "-224",  "-26",  "-inf",
    "-120",    "inf",  "inf",  "-96",   "-inf",     "-120",  "-208", "176",
    "-192",    "96",   "-inf", "72",    "inf",      "20",    "-inf", "-inf",
    "-80",     "-inf", "-inf", "-224",  "-inf",     "88",    "inf",  "inf",
    "224",     "inf",  "-40",  "-inf",  "192",      "-80",   "104",  "-240",
    "-inf",    "-inf", "22",   "176",   "-inf",     "128",   "-inf", "-40",
    "120",     "inf",  "-22",  "-inf",  "-80",      "22",    "36",   "-72",
    "-inf",    "-inf", "-192", "56",    "-inf",     "inf",   "-inf", "60",
    "-176",    "160",  "128",  "-inf",  "-inf",     "-52",   "-176", "40",
    "-inf",    "13",   "2.5",  "inf",   "-inf",     "-inf",  "-192", "inf",
    "10",      "inf",  "-inf", "inf",   "-inf",     "inf",   "-224", "inf",
    "-208",    "-inf", "inf",  "inf",   "-inf",     "-inf",  "-120", "inf",
    "-inf",    "80",   "-inf", "-128",  "-208",     "88",    "-144", "inf",
    "-176",    "144",  "inf",  "-112",  "-192",     "-40",   "104",  "inf",
    "-inf",    "-240", "-60",  "144",   "-inf",     "-inf",  "240",  "-inf",
    "inf",     "inf",  "208",  "-inf",  "-inf",     "inf",   "inf",  "-20",
    "160",     "192",  "-inf", "-inf",  "inf",      "-208",  "192",  "192",
    "inf",     "-inf", "208",  "-104",  "-inf",     "144",   "-208", "224",
    "56",      "-176", "inf",  "160",   "0.5625",   "inf",   "-inf", "128",
    "-144",    "104",  "240",  "-104",  "inf",      "-240",  "-192", "-inf",
    "-inf",    "-128", "-240", "-56",   "0.8125",   "-9",    "-240", "-inf",
    "-208",    "208",  "-72",  "-48",   "-40",      "192",   "inf",  "104",
    "40",      "112",  "inf",  "240",   "192",      "-128",  "224",  "-inf",
    "-80",     "-13",  "-240", "-inf",  "72",       "-inf",  "52",   "-176",
    "inf",     "-224", "24",   "inf",   "72",       "224",   "112",  "-208",
    "-128",    "128",  "-36",  "36",    "-240",     "-inf",  "224",  "28",
    "-96",     "-96",  "-inf", "-inf",  "-inf",     "-36",   "64",   "inf",
    "-inf",    "13",   "-inf", "44",    "56",       "128",   "-inf", "inf",
    "-208",    "-inf", "-inf", "-224",  "-120",     "-128",  "inf",  "-144",
    "-inf",    "-144", "-inf", "1.625", "inf",      "-28",   "36",   "-inf",
    "-240",    "-inf", "inf",  "-120",  "-inf",     "-inf",  "-inf", "-160",
    "56",      "-160", "-224", "224",   "-104",     "inf",   "208",  "-inf",
    "10",      "-80",  "-inf", "-64",   "-120",     "-inf",  "-224", "-inf",
    "-16",     "inf",  "inf",  "-80",   "144",      "-13",   "-224", "inf",
    "-16",     "-inf", "56",   "inf",   "inf",      "inf",   "inf",  "160",
    "-208",    "-inf", "inf",  "224",   "-192",     "inf",   "-48",  "192",
    "inf",     "-inf", "-176", "-inf",  "10",       "-inf",  "-128", "inf",
    "112",     "-44",  "-64",  "64",    "inf",      "inf",   "inf",  "-240",
    "inf",     "inf",  "-inf", "-inf",  "inf",      "inf",   "inf",  "-80",
    "72",      "-224", "224",  "224",   "inf",      "-224",  "176",  "inf",
    "inf",     "inf",  "-inf", "-inf",  "-144",     "inf",   "-inf", "-80",
    "-inf",    "-22",  "-80",  "-208",  "-inf",     "-96",   "-inf", "inf",
    "0.28125", "192",  "-inf", "224",   "-inf",     "72",    "120",  "-inf",
    "144",     "192",  "-224", "-40",   "160",      "-inf",  "-inf", "inf",
    "-inf",    "-40",  "192",  "-144",  "-48",      "112",   "-inf", "-120",
    "inf",     "-160", "-72",  "-inf",  "-36",      "-inf",  "128",  "-224",
    "-128",    "-96",  "inf",  "inf",   "inf",      "inf",   "-inf", "-inf",
    "inf",     "-72",  "-20",  "-18",   "-144",     "inf",   "-inf", "inf",
    "-176",    "-inf", "inf",  "inf",   "-80",      "inf",   "-144", "-inf"};


};  // namespace TEST_FP8_DATA
