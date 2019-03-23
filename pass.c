#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
 
// leftrotate function definition
#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c))))

char * pass []= {"password",
 "123456",
 "12345678",
 "1234",
 "12345",
 "dragon",
 "qwerty",
 "mustang",
 "baseball",
 "master",
 "michael",
 "football",
 "shadow",
 "monkey",
 "abc123",
 "pass",
 "jordan",
 "harley",
 "ranger",
 "jennifer",
 "hunter",
 "2000",
 "test",
 "batman",
 "trustno1",
 "thomas",
 "tigger",
 "robert",
 "access",
 "love",
 "buster",
 "1234567",
 "soccer",
 "hockey",
 "killer",
 "george",
 "andrew",
 "charlie",
 "superman",
 "dallas",
 "jessica",
 "pepper",
 "1111",
 "austin",
 "william",
 "daniel",
 "golfer",
 "summer",
 "heather",
 "hammer",
 "yankees",
 "joshua",
 "maggie",
 "enter",
 "ashley",
 "thunder",
 "cowboy",
 "silver",
 "richard",
 "orange",
 "merlin",
 "michelle",
 "corvette",
 "bigdog",
 "cheese",
 "matthew",
 "121212",
 "patrick",
 "martin",
 "freedom",
 "ginger",
 "nicole",
 "sparky",
 "yellow",
 "camaro",
 "secret",
 "falcon",
 "taylor",
 "111111",
 "131313",
 "123123",
 "hello",
 "scooter",
 "please",
 "porsche",
 "guitar",
 "chelsea",
 "black",
 "diamond",
 "nascar",
 "jackson",
 "cameron",
 "654321",
 "computer",
 "amanda",
 "wizard",
 "xxxxxxxx",
 "money",
 "phoenix",
 "mickey",
 "bailey",
 "knight",
 "iceman",
 "tigers",
 "purple",
 "andrea",
 "dakota",
 "aaaaaa",
 "player",
 "sunshine",
 "morgan",
 "starwars",
 "boomer",
 "cowboys",
 "edward",
 "charles",
 "girls",
 "booboo",
 "coffee",
 "bulldog",
 "ncc1701",
 "rabbit",
 "peanut",
 "john",
 "johnny",
 "gandalf",
 "winter",
 "brandy",
 "compaq",
 "carlos",
 "tennis",
 "james",
 "mike",
 "brandon",
 "fender",
 "anthony",
 "ferrari",
 "cookie",
 "chicken",
 "maverick",
 "chicago",
 "joseph",
 "diablo",
 "666666",
 "willie",
 "welcome",
 "chris",
 "panther",
 "yamaha",
 "justin",
 "banana",
 "driver",
 "marine",
 "angels",
 "fishing",
 "david",
 "maddog",
 "wilson",
 "dennis",
 "captain",
 "chester",
 "smokey",
 "xavier",
 "steven",
 "viking",
 "snoopy",
 "blue",
 "eagles",
 "winner",
 "samantha",
 "house",
 "miller",
 "flower",
 "jack",
 "firebird",
 "butter",
 "united",
 "turtle",
 "steelers",
 "tiffany",
 "zxcvbn",
 "tomcat",
 "golf",
 "bond007",
 "bear",
 "tiger",
 "doctor",
 "gateway",
 "gators",
 "angel",
 "junior",
 "thx1138",
 "boys",
 "debbie",
 "spider",
 "melissa",
 "burger",
 "1212",
 "flyers",
 "fish",
 "matrix",
 "teens",
 "scooby",
 "jason",
 "walter",
 "boston",
 "braves",
 "yankee",
 "barney",
 "victor",
 "tucker",
 "princess",
 "mercedes",
 "5150",
 "doggie",
 "zzzzzz",
 "gunner",
 "bubba",
 "2112",
 "fred",
 "johnson",
 "member",
 "donald",
 "bigdaddy",
 "bronco",
 "voyager",
 "rangers",
 "birdie",
 "trouble",
 "white",
 "topgun",
 "green",
 "super",
 "qazwsx",
 "magic",
 "lakers",
 "rachel",
 "slayer",
 "scott",
 "2222",
 "asdf",
 "video",
 "london",
 "7777",
 "marlboro",
 "srinivas",
 "internet",
 "action",
 "carter",
 "jasper",
 "monster",
 "teresa",
 "jeremy",
 "11111111",
 "bill",
 "crystal",
 "peter",
 "beer",
 "rocket",
 "theman",
 "oliver",
 "prince",
 "beach",
 "amateur",
 "7777777",
 "muffin",
 "redsox",
 "star",
 "testing",
 "shannon",
 "murphy",
 "frank",
 "hannah",
 "dave",
 "eagle1",
 "11111",
 "mother",
 "nathan",
 "raiders",
 "steve",
 "forever",
 "angela",
 "viper",
 "ou812",
 "jake",
 "gregory",
 "buddy",
 "whatever",
 "young",
 "nicholas",
 "lucky",
 "helpme",
 "jackie",
 "monica",
 "midnight",
 "college",
 "baby",
 "brian",
 "mark",
 "startrek",
 "sierra",
 "leather",
 "232323",
 "4444",
 "beavis",
 "happy",
 "sophie",
 "ladies",
 "giants",
 "blonde",
 "golden",
 "fire",
 "sandra",
 "pookie",
 "packers",
 "einstein",
 "dolphins",
 "chevy",
 "winston",
 "warrior",
 "sammy",
 "8675309",
 "zxcvbnm",
 "power",
 "victoria",
 "asdfgh",
 "toyota",
 "travis",
 "hotdog",
 "paris",
 "rock",
 "extreme",
 "redskins",
 "ford",
 "freddy",
 "arsenal",
 "access14",
 "wolf",
 "iloveyou",
 "alex",
 "florida",
 "eric",
 "legend",
 "movie",
 "success",
 "rosebud",
 "jaguar",
 "great",
 "cool",
 "cooper",
 "1313",
 "scorpio",
 "mountain",
 "madison",
 "987654",
 "brazil",
 "lauren",
 "japan",
 "stars",
 "apple",
 "alexis",
 "aaaa",
 "bonnie",
 "peaches",
 "jasmine",
 "kevin",
 "matt",
 "qwertyui",
 "danielle",
 "4321",
 "4128",
 "runner",
 "swimming",
 "dolphin",
 "gordon",
 "casper",
 "saturn",
 "gemini",
 "apples",
 "august",
 "3333",
 "canada",
 "blazer",
 "hunting",
 "kitty",
 "rainbow",
 "112233",
 "arthur",
 "calvin",
 "surfer",
 "samson",
 "kelly",
 "paul",
 "mine",
 "king",
 "racing",
 "5555",
 "eagle",
 "newyork",
 "little",
 "redwings",
 "smith",
 "sticky",
 "cocacola",
 "animal",
 "broncos",
 "private",
 "skippy",
 "marvin",
 "blondes",
 "enjoy",
 "girl",
 "apollo",
 "parker",
 "qwert",
 "time",
 "sydney",
 "women",
 "voodoo",
 "juice",
 "abgrtyu",
 "777777",
 "dreams",
 "maxwell",
 "music",
 "rush2112",
 "russia",
 "scorpion",
 "rebecca",
 "tester",
 "mistress",
 "phantom",
 "billy",
 "6666",
 "albert"};



 
// These vars will contain the hash
uint32_t h0, h1, h2, h3;
 
void md5(uint8_t *initial_msg, size_t initial_len) {
 
    // Message (to prepare)
    uint8_t *msg = NULL;
 
    // Note: All variables are unsigned 32 bit and wrap modulo 2^32 when calculating
 
    // r specifies the per-round shift amounts
 
    uint32_t r[] = {7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
                    5,  9, 14, 20, 5,  9, 14, 20, 5,  9, 14, 20, 5,  9, 14, 20,
                    4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
                    6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21};

    // Use binary integer part of the sines of integers (in radians) as constants// Initialize variables:
    uint32_t k[] = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
        0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
        0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
        0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
        0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
        0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
        0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
        0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
        0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
        0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
        0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
        0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
        0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
        0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
        0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391};
 
    h0 = 0x67452301;
    h1 = 0xefcdab89;
    h2 = 0x98badcfe;
    h3 = 0x10325476;
 
    // Pre-processing: adding a single 1 bit
    //append "1" bit to message    
    /* Notice: the input bytes are considered as bits strings,
       where the first bit is the most significant bit of the byte.[37] */
 
    // Pre-processing: padding with zeros
    //append "0" bit until message length in bit ≡ 448 (mod 512)
    //append length mod (2 pow 64) to message
 
    int new_len;
    for(new_len = initial_len*8 + 1; new_len%512!=448; new_len++);
    new_len /= 8;
 
    msg = calloc(new_len + 64, 1); // also appends "0" bits 
                                   // (we alloc also 64 extra bytes...)
    memcpy(msg, initial_msg, initial_len);
    msg[initial_len] = 128; // write the "1" bit
 
    uint32_t bits_len = 8*initial_len; // note, we append the len
    memcpy(msg + new_len, &bits_len, 4);           // in bits at the end of the buffer
 
    // Process the message in successive 512-bit chunks:
    //for each 512-bit chunk of message:
    int offset;
    for(offset=0; offset<new_len; offset += (512/8)) {
 
        // break chunk into sixteen 32-bit words w[j], 0 ≤ j ≤ 15
        uint32_t *w = (uint32_t *) (msg + offset);
 
#ifdef DEBUG
        printf("offset: %d %x\n", offset, offset);
 
        int j;
        for(j =0; j < 64; j++) printf("%x ", ((uint8_t *) w)[j]);
        puts("");
#endif
 
        // Initialize hash value for this chunk:
        uint32_t a = h0;
        uint32_t b = h1;
        uint32_t c = h2;
        uint32_t d = h3;
 
        // Main loop:
        uint32_t i;
        for(i = 0; i<64; i++) {

#ifdef ROUNDS
            uint8_t *p;
            printf("%i: ", i);
            p=(uint8_t *)&a;
            printf("%2.2x%2.2x%2.2x%2.2x ", p[0], p[1], p[2], p[3], a);
         
            p=(uint8_t *)&b;
            printf("%2.2x%2.2x%2.2x%2.2x ", p[0], p[1], p[2], p[3], b);
         
            p=(uint8_t *)&c;
            printf("%2.2x%2.2x%2.2x%2.2x ", p[0], p[1], p[2], p[3], c);
         
            p=(uint8_t *)&d;
            printf("%2.2x%2.2x%2.2x%2.2x", p[0], p[1], p[2], p[3], d);
            puts("");
#endif        

 
            uint32_t f, g;
 
             if (i < 16) {
                f = (b & c) | ((~b) & d);
                g = i;
            } else if (i < 32) {
                f = (d & b) | ((~d) & c);
                g = (5*i + 1) % 16;
            } else if (i < 48) {
                f = b ^ c ^ d;
                g = (3*i + 5) % 16;          
            } else {
                f = c ^ (b | (~d));
                g = (7*i) % 16;
            }

#ifdef ROUNDS
            printf("f=%x g=%d w[g]=%x\n", f, g, w[g]);
#endif 
            uint32_t temp = d;
            d = c;
            c = b;
            //printf("rotateLeft(%x + %x + %x + %x, %d)\n", a, f, k[i], w[g], r[i]);
            b = b + LEFTROTATE((a + f + k[i] + w[g]), r[i]);
            a = temp;


 
        }
 
        // Add this chunk"s hash to result so far:
 
        h0 += a;
        h1 += b;
        h2 += c;
        h3 += d;
 
    }
 
    // cleanup
    free(msg);
 
}
 
int main(int argc, char **argv) {

    int Cap_1=1, n1=7, p1=8, n2=9, p2=10, n3=11, Cap_2=0, Cap_3=0;

    char str_buf[256];
    char *punc= "~!@#$%^&*()_-+={}[]:<>,./X";

    int c=0;
    int i;

    // to append the first word
    for (i=0; pass[n1][i] != 0; i++)
	str_buf[c++] = pass[n1][i];
    
    // appends the punctuation
    str_buf[c] = punc[p1];
    c++;

    int c_2 = c;

    // to append the second word
    for (i=0; pass[n2][i] != 0; i++)
	str_buf[c++] = pass[n2][i];

    //appends the second punc
    str_buf[c] = punc[p2];
    c++;

    int c_3=c;
    //append the 3rd word
    for (i=0; pass[n3][i] != 0; i++)
	str_buf[c++] = pass[n3][i];

    //appends the null terminator
    str_buf[c]=0;
    c++;

    if (Cap_1) {
        str_buf[0] = str_buf[0] + 'A' - 'a';
    }

    if (Cap_2) {
        str_buf[c_2] = str_buf[c_2] + 'A' - 'a';
    }

    if (Cap_3) {
        str_buf[c_3] = str_buf[c_3] + 'A' - 'a';
    }







    printf("password: %s\n", str_buf);
    

//exit(1);
	

 
    /*if (argc < 2) {
        printf("usage: %s \"string\"\n", argv[0]);
        return 1;
    }
 */



    char *msg = str_buf;
    size_t len = strlen(msg);
 
    // benchmark
    // int i;
    // for (i = 0; i < 1000000; i++) {
        md5(msg, len);
    // }
 
    //var char digest[16] := h0 append h1 append h2 append h3 //(Output is in little-endian)
    uint8_t *ph0, *ph1, *ph2, *ph3;
 
    // display result
 
    ph0=(uint8_t *)&h0;
    printf("%2.2x%2.2x%2.2x%2.2x", ph0[0], ph0[1], ph0[2], ph0[3], h0);
 
    ph1=(uint8_t *)&h1;
    printf("%2.2x%2.2x%2.2x%2.2x", ph1[0], ph1[1], ph1[2], ph1[3], h1);
 
    ph2=(uint8_t *)&h2;
    printf("%2.2x%2.2x%2.2x%2.2x", ph2[0], ph2[1], ph2[2], ph2[3], h2);
 
    ph3=(uint8_t *)&h3;
    printf("%2.2x%2.2x%2.2x%2.2x", ph3[0], ph3[1], ph3[2], ph3[3], h3);
    puts("");
 
//    unsigned int resA=0x66 0x23 0x6a 0x97, resB=0xbb 0x6f 0x74 0x56, resC=0x85 0x66 0x80 0x1d, resD=0x24 0x95 0xee 0x82;
//    unsigned int resA=0x73 0x92 0x7d 0x01, resB= 0xfc 0xe9 0xa7 0x4b, resC=0x62 0x03 0xc1 0x36, resD=0x41 0xbc 0xa3 0xd5;
    

/*    if (
	ph0[0]==0x73 && ph0[1]==0x92 && ph0[2]==0x7d && ph0[3]==0x01 &&
	ph1[0]==0xfc && ph1[1]==0xe9 && ph1[2]==0xa7 && ph1[3]==0x4b &&
	ph2[0]==0x62 && ph2[1]==0x03 && ph2[2]==0xc1 && ph2[3]==0x36 &&
	ph3[0]==0x41 && ph3[1]==0xbc && ph3[2]==0xa3 && ph3[3]==0xd5)
*/

if (
	ph0[0]==0x66 && ph0[1]==0x23 && ph0[2]==0x6a && ph0[3]==0x97 &&
	ph1[0]==0xbb && ph1[1]==0x6f && ph1[2]==0x74 && ph1[3]==0x56 &&
	ph2[0]==0x85 && ph2[1]==0x66 && ph2[2]==0x80 && ph2[3]==0x1d &&
	ph3[0]==0x24 && ph3[1]==0x95 && ph3[2]==0xee && ph3[3]==0x82)



    {
        printf("Success!\n");
    }


    return 0;
}
