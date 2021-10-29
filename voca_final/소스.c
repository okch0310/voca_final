/*
단어 개수가 바뀌면 바꿀것들
변수:voca_cnt
배열:거의 다
함수:
단어뜻을 쓰는거 말구 영어만 보여주고 답을 오픈하면 맞았는지 틀렸는지 체크하게 만들어야겠다
데이 선택하게
*/

////////////////////////////////////////////////////////////////////////////////////////헤더파일
#include<stdio.h>
#include<windows.h>
#include <string.h>
#include <time.h>
#include<math.h>

////////////////////////////////////////////////////////////////////////////////////////변수선언

//0.기본
int menu = 0;
int voca_cnt = 103;

//1.단어검색
int voca_search_menu = 0;
int check = 0;

//2.삭제
int index = 0;

//6.0.단어게임
int voca_game_menu = 0;

//6.1.학습
int a = 0;//첨자
int p = 0;//첨자
#define DO 327 //도
#define MI    412 //미
#define SOL   489 //솔
#define _DO    654 //도

//6.2.게임
//색깔

#define COL GetStdHandle(STD_OUTPUT_HANDLE)    //글씨 색깔 변경

#define BLACK SetConsoleTextAttribute(COL,0x0000);  //검정

#define DARK_BLUE SetConsoleTextAttribute(COL,0x0001); //진한 파란색

#define GREEN SetConsoleTextAttribute(COL,0x0002);  //초록색

#define BLUE_GREEN SetConsoleTextAttribute(COL,0x0003); //청록색

#define BLOOD SetConsoleTextAttribute(COL,0x0004);  //검붉은색

#define PURPLE SetConsoleTextAttribute(COL,0x0005);  //보라색

#define GOLD SetConsoleTextAttribute(COL,0x0006);  //금색

#define ORIGINAL SetConsoleTextAttribute(COL,0x0007); //흰색

#define GRAY SetConsoleTextAttribute(COL,0x0008);  //회색

#define BLUE SetConsoleTextAttribute(COL,0x0009);  //파란색

#define HIGH_GREEN SetConsoleTextAttribute(COL,0x000a); //연두색

#define SKY_BLUE SetConsoleTextAttribute(COL,0x000b); //하늘색

#define RED SetConsoleTextAttribute(COL,0x000c);  //빨간색

#define PLUM SetConsoleTextAttribute(COL,0x000d);  //자주색

#define YELLOW SetConsoleTextAttribute(COL,0x000e);  //노란색

#define WHITE SetConsoleTextAttribute(COL,0x000f);//하얀색


int color = 0;//보유중인 물감 갯수

//7.기타
clock_t start, end;//시간측정할때 사용
int min = 0;
int sec = 0;
int ms = 0;
int total_time = 0;
int step2_time = 0;

////////////////////////////////////////////////////////////////////////////////////////배열선언
//0.기본 
char voca_eng[103][30] = {
    //////////day1-2
      /*
   "hold",
   "arrange",
   "pass",
   "reach",
   "adjust",
   "point",
   "load",
   "occupied",
   "bend",
   "lean",
   "park",
   "throw away",
   "pack",
   "overlook",
   "aisle",
   "fill",
   "inspect",
   "trim",
   "pave",
   "assemble",
   "sail",
   "mow",
   "copy",
   "perform",
   "transport",
   "shop",
   "pour",
   "shade",
   "surround",
   "tow",
   "wear",
   "rake",
   "place",
   "face",
   "line",
   "plug in",
   "cross",
   "hang",
   "distribute",
   "fold",
   "reflect",
   "address",
   "plant",
   "file",
   "operate",
   "stack",
   "clap",
   "kneel",
   "turn on",
   "stroll",
   "pile",
   "store",
   "pick up",
   "serve",
   "board",
   "frame",
   "relax",
   "roll",
   "bow",
   "clear",
   "display",
   "extend",
   "cook",
   "sip",
   "work on",
   "sweep",
   "browse",
   "lie",
   "wrap",
   "exercise",
   "border",
   "set up",
   "spread",
   "wipe",
   "dine",
   "stock",
   "fasten",
   "exchange",
   "take notes",
   "polish",
   "lift",
   "run",
   "sort",
   "sew",
   "put away",
   "spray",
   "enter",
   "move",
   "check",
   "climb",
   "row",
   "exit",
   "mount",
   "be seated",
   "dock",
   "put up",
   "cast",
   "fall",
   "post",
   "take off",
   "outdoors"
   */
   //////////day3-4
      /*
     "responsible",
  "available",
  "utility",
  "repair",
  "offer",
  "status",
  "record",
  "leave",
  "session",
  "organize",
  "revise",
  "join",
  "borrow",
  "charge",
  "interview",
  "bottom",
  "prefer",
  "approve",
  "document",
  "order",
  "projection",
  "contact",
  "bill",
  "colleague",
  "review",
  "cost",
  "make it",
  "proofread",
  "committee",
  "retire",
  "add",
  "flyer",
  "deadline",
  "ship",
  "take over",
  "get to",
  "return",
  "draft",
  "depend on",
  "delay",
  "supply",
  "submit",
  "negotiation",
  "mind",
  "find out",
  "agreement",
  "formal",
  "banquet",
  "presentation",
  "subscription",
  "schedule",
  "process",
  "reception",
  "consult",
  "reimburse",
  "challenging",
  "run out",
  "transfer",
  "invoice",
  "celebrate",
  "ride",
  "label",
  "supervisor",
  "manual",
  "sign",
  "lead",
  "monitor",
  "inventory",
  "identification",
  "survey",
  "suggest",
  "go ahead",
  "belong to",
  "make sure",
  "donate",
  "lower",
  "branch",
  "manage",
  "ask for",
  "deliver",
  "recommend",
  "purchase",
  "head",
  "know if",
  "lend",
  "weigh",
  "accept",
  "improve",
  "downtown",
  "require",
  "renew",
  "travel",
  "no later than",
  "employee",
  "holiday",
  "local",
  "deserve",
  "upstairs",
  "wonder",
  "mail",
  "be supposed to"
  */
  //////////day5-6
 /*
 "candidate",
 "option",
 "replace",
 "not until ~",
 "issue",
 "promotion",
 "shift",
 "opening",
 "impressed",
 "brainstorm",
 "feedback",
 "confirm",
 "domestic",
 "warranty",
 "cover",
 "upcoming",
 "figure out",
 "install",
 "community",
 "nominate",
 "publish",
 "locate",
 "contractor",
 "save",
 "reject",
 "check out",
 "extra",
 "relationship",
 "apologize",
 "assembly",
 "reservation",
 "be sure to",
 "assorted",
 "experience",
 "facility",
 "loan",
 "spot",
 "recipe",
 "stop by",
 "prescription",
 "put together",
 "spacious",
 "potential",
 "improvement",
 "in the meantime",
 "lease",
 "remodeling",
 "raise",
 "overseas",
 "account",
 "expand",
 "annual",
 "promote",
 "deal",
 "space",
 "popular",
 "postpone",
 "budget",
 "cut back",
 "qualified",
 "neighborhood",
 "away",
 "correct",
 "specialize",
 "inconvenience",
 "reasonable",
 "turn out",
 "advantage",
 "own",
 "workload",
 "broken",
 "misplace",
 "application",
 "connect",
 "policy",
 "sound",
 "handout",
 "accommodate",
 "rent",
 "crowded",
 "see if",
 "release",
 "expense",
 "set aside",
 "background",
 "author",
 "evaluation",
 "regional",
 "shape",
 "block",
 "suspend",
 "project",
 "public",
 "correction",
 "landscaping",
 "injure",
 "fill out[in]",
 "that way",
 "damaged",
 "in time"
 */

 //////////day7-8
/*
"interested",
"attend",
"estimate",
"flexible",
"fee",
"sold out",
"refundable",
"hire",
"electronically",
"payment",
"influence",
"charity",
"a couple of",
"property",
"leak",
"management",
"apply",
"last-minute",
"collection",
"maintenance",
"originally",
"progress",
"fascinating",
"cancel",
"lack",
"luncheon",
"later",
"edition",
"missing",
"select",
"deposit",
"layout",
"terrific",
"lay off",
"detail",
"calculate",
"mix-up",
"advertisement",
"catering",
"error",
"overcharge",
"routine",
"develop",
"register",
"attract",
"out of town",
"rush",
"manufacturer",
"negotiate",
"tenant",
"award",
"feature",
"souvenir",
"broadcast",
"representative",
"demonstration",
"culinary",
"hesitate",
"proceed to",
"alternative",
"attendee",
"reward",
"patron",
"loyal",
"applause",
"reputation",
"outgoing",
"comprehensive",
"direct",
"host",
"talented",
"remarkable",
"anniversary",
"report",
"contain",
"permit",
"tune",
"retail",
"smoothly",
"accurate",
"last",
"note",
"refreshments",
"remind",
"organization",
"construction",
"share",
"discuss",
"outdated",
"highlight",
"prestigious",
"mark",
"enthusiastic",
"recognize",
"concern",
"task",
"attention",
"practical",
"volunteer",
"get back to"
*/
//////////day9-10

"prohibit",
"thrilled",
"complimentary",
"look forward to",
"fit",
"article",
"announcement",
"renowned",
"discount",
"commute",
"market",
"career",
"package",
"favorable",
"confident",
"reminder",
"unique",
"match",
"sale",
"inspire",
"nutritious",
"point out",
"comfortable",
"keynote",
"athletic",
"introduce",
"high-quality",
"prepare",
"device",
"take time",
"minor",
"latest",
"decorate",
"innovative",
"vote",
"detour",
"fund",
"private",
"forecast",
"restore",
"expert",
"occasion",
"list",
"(just) in case",
"honor",
"run low",
"explain",
"slippery",
"fair",
"furnishings",
"feel free to",
"limited",
"train",
"recall",
"total",
"familiar",
"individual",
"seating",
"support",
"priority",
"apprentice",
"grateful",
"leadership",
"continue",
"take place",
"moment",
"figure",
"administrative",
"spend",
"belongings",
"track",
"research",
"explore",
"pleasure",
"congratulate",
"merger",
"break",
"competition",
"inexpensive",
"payroll",
"district",
"negative",
"upgrade",
"agency",
"sample",
"treat",
"renovation",
"need",
"historic",
"warehouse",
"resident",
"successful",
"intact",
"extraordinary",
"generous",
"audience",
"drop",
"carry",
"various",
"in advance",
"keep in mind",

//////////day11-12
/*
"conduct",
"assure",
"launch",
"fulfill",
"implement",
"prevent",
"indicate",
"assign",
"relocate",
"affect",
"soar",
"attach",
"recruit",
"consider",
"enhance",
"accompany",
"guarantee",
"reorganize",
"retain",
"afford",
"decline",
"collaborate",
"enlarge",
"undergo",
"modify",
"acknowledge",
"clarify",
"boost",
"vary",
"engage",
"preserve",
"react",
"convert",
"obtain",
"obstruct",
"expect",
"dwindle",
"solicit",
"allocate",
"foster",
"alleviate",
"undertake",
"omit",
"incur",
"maneuver",
"expedite",
"entail",
"officiate",
"remit",
"fluctuate",
"benefit",
"grant",
"encourage",
"express",
"respond",
"limit",
"participate",
"involve",
"seek",
"reveal",
"evaluate",
"double",
"acquire",
"propose",
"merge",
"intend",
"inform",
"exceed",
"authorize",
"comply",
"interrupt",
"divide",
"generate",
"withdraw",
"entitle",
"relieve",
"compromise",
"decide",
"resume",
"outline",
"focus",
"reduce",
"terminate",
"present",
"convey",
"duplicate",
"interact",
"disclose",
"diversify",
"compile",
"endorse",
"verify",
"impose",
"liquidate",
"lure",
"transmit",
"commemorate",
"acquaint",
"deliberate",
"convene"
*/

//////////day13-14
/*
"reserve",
"partner",
"determine",
"examine",
"handle",
"coordinate",
"maintain",
"ensure",
"avoid",
"consist",
"follow",
"enforce",
"establish",
"refrain",
"cause",
"enroll",
"investigate",
"resign",
"occur",
"succeed",
"assume",
"emerge",
"observe",
"expose",
"restrict",
"finalize",
"argue",
"forward",
"insert",
"speculate",
"qualify",
"surpass",
"interfere",
"refer",
"rely",
"disregard",
"object",
"summarize",
"waive",
"overhaul",
"facilitate",
"yield",
"revert",
"relinquish",
"strive",
"affix",
"integrate",
"solidify",
"encompass",
"institute",
"reschedule",
"separate",
"exhibit",
"compare",
"remain",
"allow",
"oversee",
"announce",
"meet",
"instruct",
"broaden",
"book",
"admit",
"notify",
"represent",
"advise",
"expire",
"depart",
"appoint",
"resolve",
"equip",
"remove",
"target",
"appeal",
"subscribe",
"adhere",
"conserve",
"eliminate",
"cooperate",
"encounter",
"provide",
"contribute",
"result",
"utilize",
"prolong",
"anticipate",
"combine",
"settle",
"attribute",
"emphasize",
"patronize",
"redeem",
"abolish",
"dispose",
"amend",
"commence",
"conceive",
"activate",
"thrive",
"assess",
"complement"
*/
//////////day15-16
/*
 "applicant",
"opportunity",
"shipment",
"procedure",
"condition",
"performance",
"asset",
"rating",
"equipment",
"restraint",
"dispute",
"income",
"compensation",
"evidence",
"duty",
"renewal",
"gain",
"participation",
"supervision",
"refund",
"view",
"consent",
"location",
"expertise",
"majority",
"recommendation",
"inquiry",
"flaw",
"satisfaction",
"pollution",
"inspection",
"aim",
"constraint",
"material",
"conservation",
"headquarters",
"vendor",
"analysis",
"oversight",
"attire",
"transaction",
"substitute",
"insight",
"proficiency",
"delegate",
"succession",
"fluctuation",
"transit",
"amendment",
"subsidiary",
"request",
"agenda",
"production",
"revenue",
"receipt",
"entrance",
"notice",
"processing",
"destination",
"access",
"quarter",
"safety",
"solution",
"resource",
"observance",
"coworker",
"ability",
"extension",
"congestion",
"productivity",
"achievement",
"description",
"suggestion",
"responsibility",
"consumption",
"preference",
"decision",
"registration",
"ceremony",
"growth",
"outcome",
"permission",
"phase",
"relocation",
"setting",
"investment",
"convenience",
"environment",
"surplus",
"initiative",
"proceeds",
"diagnosis",
"audit",
"appraisal",
"perspective",
"bid",
"commission",
"abstract",
"means",
"privilege"
*/

//////////day17-18
/*
"attendance",
"complaint",
"manner",
"itinerary",
"proposal",
"profit",
"submission",
"negligence",
"excess",
"appointment",
"response",
"deficit",
"contribution",
"atmosphere",
"impact",
"transportation",
"fare",
"signature",
"authority",
"sequence",
"expiration",
"caution",
"effort",
"direction",
"replacement",
"amenity",
"acceptance",
"cuisine",
"recovery",
"expenditure",
"conflict",
"ingredient",
"security",
"regulation",
"preservation",
"departure",
"lapse",
"proximity",
"morale",
"specification",
"acquisition",
"dealership",
"alliance",
"courier",
"contingency",
"prosperity",
"recipient",
"prospect",
"array",
"recession",
"subordinate",
"requirement",
"shortage",
"preparation",
"malfunction",
"approval",
"distribution",
"arrangement",
"instruction",
"addition",
"competitor",
"demand",
"practice",
"exposure",
"stability",
"efficiency",
"commitment",
"incentive",
"contract",
"absence",
"confirmation",
"admission",
"area",
"confidence",
"fine",
"damage",
"strategy",
"overview",
"method",
"industry",
"consideration",
"term",
"distance",
"compliance",
"objective",
"attraction",
"assumption",
"measure",
"degree",
"code",
"coverage",
"adversity",
"nomination",
"deliberation",
"discretion",
"inspiration",
"supplement",
"liability",
"approach",
"consensus",
"reimbursement"
*/

//////////day19-20
/*
"advance",
"function",
"increase",
"certificate",
"variety",
"care",
"concentration",
"accommodation",
"entry",
"standard",
"statement",
"discussion",
"component",
"appearance",
"position",
"appreciation",
"exception",
"clearance",
"executive",
"resume",
"accomplishment",
"architect",
"conference",
"average",
"indicator",
"accounting",
"rate",
"selection",
"manuscript",
"expansion",
"reference",
"labor",
"storage",
"installment",
"effect",
"wage",
"summary",
"insurance",
"capacity",
"minutes",
"obligation",
"quote",
"patent",
"precaution",
"implication",
"documentation",
"hospitality",
"setback",
"presence",
"entrepreneur",
"permanent",
"competitive",
"profitable",
"attentive",
"creative",
"superior",
"costly",
"associated",
"extensive",
"rare",
"initial",
"fragile",
"multiple",
"beneficial",
"constant",
"numerous",
"reluctant",
"introductory",
"ongoing",
"tailored",
"unexpected",
"risky",
"reliable",
"overdue",
"efficient",
"courteous",
"ideal",
"stable",
"satisfactory",
"automated",
"willing",
"persuasive",
"commercial",
"conscious",
"exclusive",
"unprecedented",
"prevalent",
"demanding",
"optimal",
"receptive",
"discretionary",
"exempt",
"considerate",
"adjacent",
"authentic",
"dedicated",
"predictable",
"accountable",
"inclement",
"obsolete"
*/
//////////day21-22
/*
"additional",
"regular",
"experienced",
"sufficient",
"professional",
"functional",
"adequate",
"vital",
"unlimited",
"managerial",
"unattended",
"artificial",
"protective",
"steady",
"sizable",
"due",
"noticeable",
"sensitive",
"impressive",
"outstanding",
"widespread",
"visible",
"exceptional",
"personal",
"enclosed",
"superb",
"eager",
"removable",
"positive",
"committed",
"previous",
"likely",
"repeated",
"valid",
"abundant",
"rigorous",
"tentative",
"diverse",
"ample",
"lucrative",
"knowledgeable",
"equivalent",
"entertaining",
"perishable",
"competent",
"imperative",
"redeemable",
"skeptical",
"comparable",
"versatile",
"critical",
"durable",
"promising",
"notable",
"aware",
"valuable",
"repetitive",
"unavailable",
"fiscal",
"effective",
"probable",
"alternate",
"affordable",
"contrary",
"accessible",
"informal",
"intensive",
"remote",
"able",
"accustomed",
"seasonal",
"prosperous",
"updated",
"suitable",
"delighted",
"leading",
"confidential",
"mandatory",
"defective",
"complicated",
"aggressive",
"financial",
"eligible",
"convinced",
"similar",
"designated",
"prospective",
"sustainable",
"unauthorized",
"relevant",
"stagnant",
"disposable",
"indicative",
"sophisticated",
"straightforward",
"appropriate",
"provisional",
"delinquent",
"subject",
"optimistic"
*/
//////////day23-24
 /*
"urgent",
"whole",
"substantial",
"possible",
"accomplished",
"particular",
"healthful",
"resistant",
"informative",
"existing",
"temporary",
"revised",
"capable",
"detailed",
"unavoidable",
"improper",
"bulk",
"worth",
"independent",
"related",
"advisable",
"necessary",
"skilled",
"responsive",
"significant",
"advanced",
"narrow",
"cautious",
"native",
"economic",
"memorable",
"timely",
"preferred",
"outright",
"established",
"unwavering",
"contingent",
"exquisite",
"exemplary",
"preliminary",
"proportional",
"subsequent",
"picturesque",
"consecutive",
"stringent",
"impeccable",
"anonymous",
"controversial",
"feasible",
"predominant",
"entirely",
"properly",
"annually",
"accordingly",
"strictly",
"relatively",
"skillfully",
"reasonably",
"definitely",
"expressly",
"considerably",
"totally",
"periodically",
"commonly",
"securely",
"largely",
"thoroughly",
"exclusively",
"comfortably",
"immediately",
"momentarily",
"specifically",
"dramatically",
"accidentally",
"overly",
"recently",
"highly",
"widely",
"densely",
"strategically",
"currently",
"eventually",
"primarily",
"early",
"persistently",
"formerly",
"moderately",
"consistently",
"absolutely",
"fairly",
"inadvertently",
"apparently",
"adversely",
"prominently",
"occasionally",
"previously",
"evenly",
"markedly",
"customarily",
"overwhelmingly"
*/

//////////day25-26
/*
"precisely",
"directly",
"clearly",
"approximately",
"separately",
"solely",
"increasingly",
"tightly",
"completely",
"necessarily",
"nearly",
"casually",
"unusually",
"briefly",
"accurately",
"promptly",
"easily",
"extremely",
"preferably",
"normally",
"carefully",
"punctually",
"slightly",
"officially",
"partially",
"frequently",
"conveniently",
"closely",
"hardly",
"automatically",
"shortly",
"mistakenly",
"rapidly",
"typically",
"continually",
"especially",
"efficiently",
"temporarily",
"respectively",
"mutually",
"ultimately",
"unexpectedly",
"habitually",
"explicitly",
"meticulously",
"effortlessly",
"routinely",
"simultaneously",
"unanimously",
"virtually",
"as of",
"contrary to",
"since",
"along with",
"in advance of",
"prior to",
"as to",
"in the event of",
"in exchange for",
"excluding",
"thanks to",
"including",
"besides",
"as part of",
"between",
"during",
"due to",
"as a result of",
"in response to",
"regardless of",
"on behalf of",
"according to",
"in keeping with",
"in contrast to",
"regarding",
"until",
"because of",
"beyond",
"despite",
"A as well as B",
"rather than",
"in terms of",
"relating to",
"following",
"instead of",
"by means of",
"by way of",
"with regard to",
"apart from",
"in light of",
"in celebration of",
"depending on[upon]",
"in compliance with",
"in honor of",
"in favor of",
"as opposed to"



   */

};

char voca_kor[103][30] = {

    //////////day1-2
    /*
       "들다,잡다",
   "배열하다",
   "통과하다",
   "뻗다",
   "조정하다",
   "가리키다",
   "싣다",
   "사용중인",
   "구부리다",
   "기대다",
   "공원/주차하다",
   "버리다",
   "포장하다",
   "내려다보다",
   "통로",
   "채우다",
   "자세히살펴보다",
   "다듬다",
   "포장하다",
   "모으다",
   "돛/항해하다",
   "깎다",
   "복사/복사하다",
   "공연하다",
   "수송하다",
   "상점/쇼핑하다",
   "붓다",
   "그늘/그늘지게하다",
   "둘러싸다",
   "견인하다",
   "입다",
   "갈퀴/갈퀴로긁어모으다",
   "놓다",
   "얼굴/직면하다",
   "선/정렬시키다",
   "플러그를꽂다",
   "건너다",
   "걸다",
   "배포하다",
   "접다",
   "비추다",
   "연설/연설하다",
   "식물/심다",
   "파일/철하다",
   "작동하다,운영하다",
   "쌓아올린더미/쌓다",
   "박수치다",
   "무릎을꿇다",
   "켜다",
   "산책하다",
   "더미/쌓다",
   "가게/보관하다",
   "집어들다,따다",
   "제공하다,서빙하다",
   "판자/탑승하다",
   "틀/액자에넣다",
   "휴식을취하다",
   "굴리다",
   "인사하다",
   "치우다",
   "전시/전시하다",
   "확장하다",
   "요리사/요리하다",
   "홀짝이다",
   "~에대해작업하다",
   "쓸다",
   "둘러보다",
   "놓여있다,눕다",
   "포장하다",
   "운동하다",
   "경계/경계를이루다",
   "설치하다,놓다",
   "퍼뜨리다",
   "닦다",
   "식사하다",
   "재고/채우다",
   "고정시키다",
   "교환/교환하다",
   "필기하다",
   "닦다",
   "들어올리다",
   "이어지다",
   "종류/분류하다",
   "바느질하다",
   "치우다",
   "분무기/뿌리다",
   "들어가다",
   "옮기다",
   "점검하다",
   "오르다",
   "줄/노를젓다",
   "출구/나가다",
   "장착하다",
   "앉다",
   "부두/부두에대다",
   "설치하다",
   "드리우다,던지다",
   "떨어지다",
   "기둥/게시하다",
   "벗다,이륙하다",
   "야외에서"
   */

   //////////day3-4
    /*
      "책임이있는",
  "이용가능한",
  "공공시설",
  "수리/수리하다",
  "제공/제공하다",
  "상태,지위",
  "기록/기록하다",
  "휴가/남기다",
  "기간",
  "정리하다",
  "수정하다",
  "가입하다",
  "빌리다",
  "책임/청구하다",
  "인터뷰",
  "맨아래",
  "선호하다",
  "승인하다",
  "문서/기록하다",
  "주문/주문하다",
  "추정",
  "연락/연락하다",
  "청구서/청구하다",
  "동료",
  "검토/검토하다",
  "비용/비용이들다",
  "참석하다",
  "교정보다",
  "위원회",
  "퇴직하다",
  "추가하다",
  "전단",
  "마감일",
  "보내다",
  "인수하다",
  "~에도착하다",
  "수익/돌려주다",
  "초안",
  "~에의지하다",
  "지연/지연시키다",
  "비품/공급하다",
  "제출하다",
  "협상",
  "마음/꺼리다",
  "알아내다",
  "합의",
  "공식적인",
  "연회",
  "발표",
  "구독",
  "일정/일정을잡다",
  "과정/처리하다",
  "접수처",
  "자문하다",
  "상환하다",
  "힘든",
  "떨어지다",
  "이동/이동하다",
  "청구서",
  "축하하다",
  "타고가기/타다",
  "라벨/라벨을붙이다",
  "상사,감독관",
  "설명서/수동의",
  "표지판/사인하다",
  "선두/이르다",
  "화면/감시하다",
  "재고목록",
  "신분증",
  "설문조사/조사하다",
  "제안하다",
  "계속하다",
  "~에속하다",
  "확인하다",
  "기부하다",
  "낮추다",
  "지점",
  "경영하다,가까스로하다",
  "~을요청하다",
  "배달하다",
  "추천하다",
  "구입/구입하다",
  "우두머리/향하다",
  "~인지알다",
  "빌려주다",
  "무게를재다",
  "받아들이다",
  "향상시키다",
  "도심/도심에",
  "요구하다",
  "갱신하다",
  "이동/이동하다",
  "늦어도~까지",
  "직원",
  "휴가",
  "지역의",
  "받을만하다",
  "위층/위층의/위층에서",
  "궁금해하다",
  "우편/우편으로보내다",
  "~하기로되어있다"
  */
  //////////day5-6
 /*
 "후보자",
 "선택",
 "교체하다",
 "~가되어야가능하다",
 "쟁점/발행하다",
 "홍보",
 "변화/옮기다",
 "공석",
 "깊은인상을받은",
 "브레인스토밍하다",
 "피드백",
 "확인하다",
 "국내의",
 "보증서",
 "감당하다",
 "다가오는",
 "이해하다",
 "설치하다",
 "공동체",
 "임명하다",
 "출판하다",
 "위치시키다",
 "계약자",
 "저장하다",
 "거절하다",
 "대출하다",
 "추가되는것/추가의/추가로",
 "관계",
 "사과하다",
 "조립",
 "예약",
 "반드시~하다",
 "갖가지의",
 "경험/경험하다",
 "시설",
 "대출/빌려주다",
 "장소/발견하다",
 "조리법",
 "들르다",
 "처방전",
 "준비하다",
 "넓은",
 "잠재력/잠재의",
 "향상",
 "그사이에",
 "임대차/임대하다",
 "리모델링",
 "인상/올리다",
 "해외의/해외에",
 "설명/설명하다",
 "확장되다",
 "연례의",
 "홍보하다",
 "대우/상대하다",
 "공간",
 "인기있는",
 "미루다",
 "예산/예산을세우다",
 "삭감하다",
 "자격이있는",
 "이웃",
 "부재중인/떨어져",
 "맞는/바로잡다",
 "전공하다",
 "불편/불편하게하다",
 "합리적인",
 "밝혀지다",
 "이점",
 "자신의/소유하다",
 "업무량",
 "고장난",
 "둔곳을잊어버리다",
 "지원/지원서",
 "연결하다",
 "정책",
 "~인것같다",
 "유인물",
 "숙박시키다",
 "임대/임대하다",
 "혼잡한",
 "~인지알아보다",
 "출시/출시하다",
 "비용",
 "따로챙겨두다",
 "배경",
 "작가",
 "평가",
 "지역의",
 "모양",
 "구역/차단하다",
 "중단하다",
 "프로젝트/예상하다",
 "대중/공공의",
 "정정",
 "조경",
 "손상시키다",
 "기입하다",
 "그렇게하면",
 "손상된",
 "시간맞춰",
 */

 //////////day7-8
/*
"관심있는",
"참석하다",
"견적/추정하다",
"유연한",
"요금",
"품절된",
"환불가능한",
"신입사원/고용하다",
"컴퓨터로",
"지불",
"영향/영향을주다",
"자선",
"둘의",
"소유물",
"누수/새다",
"경영진,관리",
"지원하다",
"막판의",
"수집품",
"유지",
"원래",
"진행/나아가다",
"매력적인",
"취소하다",
"부족/부족하다",
"오찬",
"후의/나중에",
"판",
"분실된",
"선택된/고르다",
"보증금/예금하다",
"배치",
"훌륭한",
"해고하다",
"세부사항/상세히알다",
"계산하다",
"혼동/혼동하다",
"광고",
"출장요리",
"오류",
"과다청구하다",
"일과/일상적인",
"개발하다",
"금전등록기/등록하다",
"끌다",
"타지역에있는",
"서두름/서두르다",
"제조업체",
"협상하다",
"세입자",
"상/수여하다",
"기능/선보이다",
"기념품",
"방송/방송하다",
"직원/대표하는",
"시연,설명",
"요리의",
"주저하다",
"향하다",
"대안/대안의",
"참석자",
"상/상을주다",
"후원자,고객",
"충성스러운",
"박수",
"평판",
"나가는,사교적인",
"종합적인",
"직접적인/안내하다",
"진행자/진행하다",
"재능있는",
"주목할만한",
"기념일",
"보고서/보고하다",
"포함하다",
"허가/허락하다",
"수신하다",
"소매/소매하다",
"순조롭게",
"정확한",
"지난/지속되다",
"주목하다",
"다과",
"상기시키다",
"단체",
"공사",
"몫/공유하다",
"토론하다",
"구식의",
"하이라이트/강조하다",
"명성있는",
"기념하다",
"열성적인",
"인정하다",
"걱정/관련이있다",
"과제/과업을맡기다",
"집중",
"실용적인",
"자원봉사자/자원봉사하다",
"~로돌아오다"
*/
////////// day9-10

"금지하다",
"신나는",
"무료의",
"~를고대하다",
"맞추다,적합하다",
"기사,물건",
"안내방송",
"유명한",
"할인/할인하다",
"통근/통근하다",
"시장/시장에내놓다",
"직업",
"포장/포장하다",
"우호적인",
"확신하는",
"알림",
"독특한",
"경기/어울리다",
"할인,매출액",
"영감을주다",
"영양가있는",
"지적하다",
"편안한",
"요지",
"체육의",
"소개하다",
"고급의",
"준비하다",
"장치",
"시간이걸리다",
"사소한",
"최신의",
"장식하다",
"혁신적인",
"투표/투표하다",
"우회로/우회하다",
"자금/자금을지원하다",
"개인의",
"예보/예보하다",
"복구하다",
"전문가/전문적인",
"행사",
"목록/목록에싣다",
"~할경우를대비해서",
"영광/영광을주다",
"고갈되다",
"설명하다",
"미끄러운",
"축제/공정한",
"가구",
"언제든지~하다",
"제한된",
"훈련하다",
"회수/회수하다",
"총액/총계의/합계가~가되다",
"친숙한",
"개인/개인의",
"좌석",
"후원/후원하다",
"우선사항",
"실습생",
"감사하는",
"리더십",
"계속하다",
"발생하다",
"순간",
"수치,인물",
"행정의",
"소비하다",
"소지품",
"선로/추적하다",
"연구/연구하다",
"탐구하다",
"기쁨",
"축하하다",
"합병",
"휴식/쉬다",
"대회",
"비싸지않은",
"급여총액",
"지역",
"부정적인",
"업그레이드/업그레이드하다",
"대리점",
"샘플/시험하다",
"대접/치료하다,다루다",
"보수",
"필요/필요로하다",
"역사적인",
"창고",
"주민",
"성공적인",
"원래대로의",
"비범한",
"관대한",
"청중",
"하락/하락하다",
"판매하다,운반하다",
"다양한",
"사전에",
"명심하다"

//////////day11-12
/*
"경영/수행하다",
"보장하다",
"출시/출시하다",
"충족하다",
"도구/시행하다",
"방지하다",
"나타내다",
"할당하다",
"이전하다",
"영향을미치다",
"급증하다",
"첨부하다",
"직원/채용하다",
"고려하다",
"강화하다",
"동행하다",
"보증서/보증하다",
"재조직하다",
"보유하다",
"여유가있다",
"감소/거절하다,감소하다",
"협력하다",
"확대하다",
"겪다",
"수정하다",
"인정하다",
"분명히하다",
"증진/증진시키다",
"다양하다",
"관여하다,참여하다",
"보호하다",
"반응하다",
"전환하다",
"획득하다",
"방해하다",
"예상하다,기대하다",
"줄다",
"간청하다",
"할당하다",
"육성하다,촉진하다",
"완화시키다",
"착수하다,떠맡다",
"생략하다",
"초래하다",
"조종하다",
"신속히처리하다",
"수반하다",
"이행하다",
"송금하다",
"오르내리다",
"이익/이익을얻다",
"보조금,장학금/주다",
"장려하다",
"신속한/표현하다",
"대답하다,반응하다",
"제한/제한하다",
"참가하다",
"수반하다,관련시키다",
"구하다,찾다",
"드러내다",
"평가하다",
"두배의/두배가되다",
"획득하다,인수하다",
"제안하다",
"합병하다",
"의도하다",
"알리다",
"초과하다",
"승인하다,권한을주다",
"준수하다",
"방해하다,중단시키다",
"나누다",
"발생시키다",
"철회하다,인출하다",
"자격을주다",
"해소하다",
"타협/타협하다,손상시키다",
"결정하다",
"재개하다",
"개요/개요를서술하다",
"집중하다",
"줄이다,할인하다",
"끝내다,끝나다",
"출석한/주다",
"전달하다",
"사본/이중의/복사하다",
"상호작용하다,소통하다",
"밝히다",
"다양화하다",
"편집하다,엮다",
"승인하다,보증하다",
"확인하다,입증하다",
"부과하다",
"청산하다",
"꾀다,유인하다",
"전송하다",
"기념하다,축하하다",
"숙지시키다",
"신중한,고의적인/심사숙고하다",
"모이다,소집하다"
*/

//////////day13-14
/*
"예약하다,보존하다",
"협력하다",
"결정하다",
"조사하다",
"다루다,처리하다",
"조정하다",
"유지하다,관리하다",
"보장하다",
"피하다",
"구성되다",
"따르다",
"시행하다,강요하다",
"설립하다",
"자제하다",
"원인/유발하다",
"등록하다",
"조사하다",
"사퇴하다",
"발생하다",
"계승하다,성공하다",
"떠맡다,가정하다",
"떠오르다",
"준수하다,관찰하다",
"노출시키다",
"제한하다",
"마무리하다",
"주장하다",
"앞으로/보내다",
"끼워넣다",
"추측하다",
"자격을얻다",
"초과하다",
"간섭하다",
"참조하다,언급하다",
"의존하다",
"무시/무시하다",
"대상,목적/반대하다",
"요약하다",
"포기하다",
"점검/점검하다",
"촉진하다",
"산출/산출하다",
"되돌아가다",
"포기하다",
"노력하다",
"붙이다",
"통합시키다",
"확고히하다",
"포함하다,에워싸다",
"기관/설치하다",
"일정을다시잡다",
"분리된/분리하다",
"전시회/전시하다",
"비교하다",
"남아있다,유지하다",
"허용하다",
"감독하다",
"발표하다",
"충족하다",
"지시하다,교육하다",
"넓히다",
"책/예약하다",
"허락하다,인정하다",
"통보하다",
"대표하다",
"충고하다",
"만료되다",
"출발하다",
"임명하다,약속을정하다",
"해결하다",
"갖추다",
"제거하다",
"목표/겨냥하다",
"흥미를끌다",
"구독하다",
"고수하다",
"보존하다",
"제거하다",
"협력하다",
"직면하다,만나다",
"제공하다",
"공헌하다",
"결과/결과로되다",
"이용하다",
"연장하다",
"예상하다,기대하다",
"결합시키다",
"해결하다,정착하다",
"탓으로돌리다",
"강조하다",
"애용하다,후원하다",
"바꾸다",
"폐지하다",
"처리하다",
"수정하다",
"시작하다",
"구상하다",
"활성화하다",
"번영하다",
"평가하다",
"보완물/보완하다"
*/
//////////day15-16
/*
"지원자",
"기회",
"배송",
"절차",
"상태,조건",
"성과,성능",
"자산",
"평가,등급",
"장비",
"제한",
"논쟁/논쟁하다",
"수익",
"보상",
"증거",
"의무,세금",
"갱신",
"수익,증가/얻다",
"참가",
"감독",
"환불/환불하다",
"견해,전망",
"동의/동의하다",
"위치",
"전문성,전문지식",
"대다수",
"추천",
"문의,질문",
"결함/손상하다",
"만족",
"오염",
"점검,검사",
"목표/겨냥하다",
"제한",
"자료,재료",
"보호",
"본사",
"판매자",
"분석",
"실수,간과",
"의상",
"거래,처리",
"대체/대신하다",
"통찰력",
"숙달,능숙",
"대표/위임하다",
"연속",
"변동,오르내림",
"수송,통행",
"수정",
"자회사/보충하는",
"요청/요청하다",
"안건",
"생산",
"수익",
"영수증,수령",
"입구,입장",
"알림/주목하다",
"가공,처리",
"목적지",
"접근/~에접근하다",
"분기,4분의1",
"안전",
"해결",
"자원",
"준수",
"동료",
"능력",
"확장,내선",
"혼잡",
"생산성",
"성취",
"해설",
"제안",
"책임",
"소비",
"선호",
"결정",
"등록",
"의식",
"성장",
"결과",
"허가",
"단계",
"이전",
"환경,장소",
"투자",
"편의",
"환경",
"여분의양,흑자",
"계획",
"수익금",
"진단",
"감사/감사하다",
"평가",
"관점",
"입찰/입찰하다",
"수수료,위원회/의뢰하다",
"요약/추상적인",
"수단,방법",
"특권/특권을주다"
*/

//////////day17-18
/*
"참석",
"항의",
"방식",
"여행일정",
"제안",
"수익",
"제출",
"부주의",
"초과/초과한",
"약속,임명",
"응답",
"적자",
"공헌",
"분위기",
"영향/영향을주다",
"교통",
"요금",
"서명",
"당국,권한",
"순서",
"만료",
"주의/주의를주다",
"노력",
"방향,감독",
"교체,후임자",
"편의시설",
"동의",
"요리",
"회복",
"비용,지출",
"충돌/충돌하다",
"재료,성분",
"보안",
"규정",
"보존",
"출발",
"과실,경과/소멸하다",
"근접",
"사기,의욕",
"명세서,사양",
"습득",
"판매대리점",
"제휴",
"택배배달원",
"비상상황",
"번영",
"수령인",
"전망",
"배열",
"불황",
"부하직원/하급의",
"필요조건",
"부족",
"준비",
"오작동/제대로작동하지않다",
"승인",
"배포,유통",
"준비",
"설명,교육",
"추가",
"경쟁자",
"요구/요구하다",
"실행,연습/연습하다",
"노출",
"안정성",
"효율성",
"헌신",
"혜택",
"계약/수축하다",
"부재,결석",
"확인",
"입장",
"지역",
"신뢰,자신감",
"벌금/좋은",
"손해/손상시키다",
"전략",
"개요",
"방식",
"산업",
"고려",
"조건,용어",
"거리",
"준수",
"목표/객관적인",
"명소,매력",
"가정,추정",
"조치/측정하다",
"학위",
"규범",
"보상범위,보도",
"역경,고난",
"지명",
"숙고",
"재량,신중함",
"영감",
"보완/보완하다",
"책임",
"접근/접근하다",
"합의",
"상환"
*/

//////////day19-20
/*
"발전/사전의/향상시키다",
"기능,행사/기능하다",
"증가/증가하다",
"증명서",
"다양성",
"돌봄/걱정하다",
"집중,농도",
"숙박시설",
"출품작,입장",
"기준",
"명세서",
"토론",
"부품,요소",
"외모,출현",
"직책,위치/위치시키다",
"감사",
"예외",
"정리,허가",
"임원/경영의",
"이력서",
"성취",
"건축가",
"회의",
"평균/평균의",
"지표",
"회계",
"비율,요금",
"선택",
"원고",
"확장",
"추천서,참조",
"노동/일하다",
"저장",
"할부",
"영향",
"급여",
"요약",
"보험",
"용량",
"회의록",
"의무",
"견적,인용/견적을내다,인용하다",
"특허/특허권이있는/특허를얻다",
"예방조치",
"암시",
"증거서류",
"환대",
"퇴보",
"존재",
"기업가",
"영구적인",
"경쟁력있는",
"수익성있는",
"주의를기울이는",
"창의적인",
"우수한",
"비싼",
"관련된",
"광범위한",
"희귀한",
"초기의",
"깨지기쉬운",
"다수의",
"유익한",
"지속적인",
"많은",
"꺼리는",
"입문의",
"진행중인",
"맞춤의",
"예상치못한",
"위험한",
"신뢰할수있는",
"기한이지난",
"효율적인",
"예의바른",
"이상적인",
"안정적인",
"만족스러운",
"자동의",
"기꺼이~하는,적극적인",
"설득력있는",
"광고/상업적인",
"인식하고있는",
"독점적인",
"전례없는",
"널리퍼진",
"힘든,요구가많은",
"최선의",
"받아들이는",
"자유재량의",
"면제된/면제하다",
"배려하는",
"이웃한",
"진짜인",
"헌신적인",
"예측가능한",
"책임이있는",
"날씨가안좋은",
"구식의"
*/
//////////day21-22
/*
"추가의",
"정기적인,보통의",
"경험이있는",
"충분한",
"전문가/전문적인",
"기능적인,편리한",
"적절한",
"필수적인",
"무제한의",
"관리의,경영의",
"방치된",
"인공의",
"보호하는",
"안정된,꾸준한",
"꽤큰",
"요금/기한이된",
"뚜렷한",
"민감한",
"인상적인",
"탁월한",
"광범위한",
"보이는",
"뛰어난,예외적인",
"개인의",
"동봉된",
"최고의",
"열망하는",
"제거할수있는",
"긍정적인",
"헌신하는",
"이전의",
"~할것같은",
"반복되는",
"유효한",
"충분한",
"엄격한",
"임시의",
"다양한",
"풍부한",
"수익성이좋은",
"박식한",
"동일한",
"즐거운",
"부패하기쉬운",
"유능한",
"필수적인",
"교환할수있는",
"회의적인",
"필적하는",
"용도가많은",
"중요한,비판적인",
"내구성이좋은",
"유망한",
"주목할만한",
"알고있는",
"귀중한",
"반복적인",
"구할수없는",
"재정의",
"효과적인",
"가능성이있는",
"대신의/교대로일어나다",
"적당한",
"반대인",
"접근할수있는",
"비공식의",
"집중적인",
"외진,희박한",
"할수있는",
"익숙한",
"계절의",
"번창하는",
"최신의",
"적절한",
"기뻐하는",
"선도하는",
"기밀의",
"의무적인",
"결함이있는",
"복잡한",
"공격적인",
"재정의",
"자격이있는",
"확신에찬",
"비슷한",
"지정된",
"가망이있는",
"지속가능한",
"권한이없는",
"관련된",
"침체된",
"일회용의",
"나타내는",
"정교한",
"직설적인",
"적절한",
"일시적인",
"연체된",
"주제/당하기쉬운",
"낙관적인"
*/
//////////day23-24
/*
"긴급한",
"전체/전체의",
"상당한",
"가능한",
"뛰어난",
"세부사항/특정한",
"건강에좋은",
"저항력있는",
"유익한",
"현존의",
"일시적인",
"수정된",
"능력이되는",
"자세한",
"피할수없는",
"부적절한",
"크기/대량의",
"가치/가치가있는",
"독립적인",
"관련된",
"바람직한",
"필요한",
"숙련된",
"민감하게반응하는",
"상당한",
"고급의",
"좁은/좁히다",
"조심스러운",
"지방출신의",
"경제의",
"기억에남는",
"시기적절한",
"선호되는",
"완전한",
"확립된",
"확고한",
"불확실한",
"정교한",
"모범적인",
"예비의",
"비례하는",
"다음에일어나는",
"그림같은",
"연속적인",
"엄격한",
"흠잡을데없는",
"익명의",
"논란거리인",
"실행가능한",
"지배적인",
"완전히",
"정확하게",
"매년",
"그에따라",
"엄격히",
"상대적으로",
"능숙하게",
"합리적으로",
"분명히",
"분명히",
"상당히",
"완전히",
"주기적으로",
"보통",
"안전하게",
"주로",
"완전히",
"독점적으로",
"편안히",
"즉시",
"일시적으로",
"구체적으로",
"급격하게",
"우연히",
"지나치게",
"최근에",
"대단히",
"광범위하게",
"밀집하여",
"전략적으로",
"현재",
"결국",
"주로",
"초기의/일찍",
"지속적으로",
"이전에",
"적당하게",
"꾸준히",
"절대적으로",
"꽤,공평하게",
"의도치않게",
"외관상으로",
"부정적으로",
"두드러지게",
"때때로",
"이전에",
"균등히",
"두드러지게",
"관례상",
"압도적으로"

*/
//////////day25-26
/*
"정확히",
"직접",
"명백하게",
"대략",
"따로",
"단독으로",
"더욱 더",
"단단히",
"완전히",
"필연적으로",
"거의",
"간편하게",
"이례적으로",
"간략하게",
"정확하게",
"지체 없이",
"쉽게",
"극도로",
"가급적이면",
"보통",
"주의 깊게",
"시간에 맞춰",
"약간",
"공식적으로",
"부분적으로",
"자주",
"편리하게",
"밀접하게",
"거의 ~ 않다",
"자동으로",
"곧",
"실수로",
"급속하게",
"일반적으로",
"지속적으로",
"특히",
"효율적으로",
"일시적으로",
"각각",
"서로",
"결국",
"예상외로",
"습관적으로",
"명확하게",
"꼼꼼하게",
"쉽게",
"일상적으로",
"동시에",
"만장일치로",
"사실상",
"~부터",
"~에 반하여",
"~ 이래로",
"~와 더불어",
"~에 앞서",
"~ 전에",
"~에 관하여",
"~에 대비하여",
"~ 대신에",
"~를 제외하고",
"~ 덕분에",
"~를 포함하여",
"게다가,~ 외에",
"~의 일환으로",
"사이에",
"~ 동안",
"~ 때문에",
"~의 결과로",
"~에 대한 응답으로",
"~와 상관없이",
"~를 대표하여",
"~에 따라",
"~에 따라",
"~와 대조적으로",
"~에 관하여",
"~까지",
"~ 때문에",
"~를 넘어서",
"~에도 불구하고",
"B뿐만 아니라 A 도",
"~보다는 차라리",
"~의 관점에서",
"~와 관련한",
"따라오는,~ 후에",
"~ 대신에",
"~를 통해",
"~를 통해",
"~에 관하여",
"~ 이외에",
"~에 비추어",
"~를 축하하여",
"~에 따라",
"~를 준수하여",
"~에 경의를 표하여",
"~를 찬성하여",
"~와 대조적으로"

*/

};


//1.단어검색
char find_voca[30];

//6.단어게임
char input_voca[30];
char test_voca[103][30];
int score[103] = { 0,0,0,0,0,0,0,0,0,0 };
int o[103] = { 0,0,0,0,0,0,0,0,0,0 };//맞은 횟수 저장
int x[103] = { 0,0,0,0,0,0,0,0,0,0 };//틀린 횟수 저장
int bird[17][11] = {
    {0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,1,1,0,0,0,0,0,0},
    {0,1,1,9,9,1,0,0,0,0,0},
    {0,4,4,8,9,1,0,0,0,0,0},
    {0,4,4,9,9,1,0,0,0,0,0},
    {0,4,8,9,1,1,1,0,0,0,0},
    {0,0,0,1,1,1,1,0,0,0,0},
    {0,0,1,1,1,2,2,1,0,0,0},
    {0,0,1,1,2,2,2,2,0,0,0},
    {0,0,1,1,3,2,2,2,2,0,0},
    {0,0,0,1,1,3,5,5,5,0,0},
    {0,0,0,1,1,3,6,6,5,0,0},
    {0,0,0,0,1,1,3,3,6,0,0},
    {0,0,0,7,7,7,0,3,3,3,0},
    {0,0,0,0,0,0,0,0,3,1,0},
    {0,0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0}
};//이차원 배열이용해 만든 앵무새 이미지 

//7.기타
int stopwatch[5] = { 0,0,0,0,0 };//시간 측정 저장소

////////////////////////////////////////////////////////////////////////////////////////함수선언

///////////1.단어검색
void voca_search();

////////////2.삭제
void eliminate();

////////////3.추가
void add();

////////////4.출력
void print();

////////////5.화면 지우기
void clear();

////////////6.단어게임
void voca_game();
//학습
void study();
void study_step1();
void study_step2();
void test();
void print_score();
void study_step3();
void review();
//게임
void print_drawing();
void gaming();// 단어시험의 점수가 그림의 완성도를 결정하는 게임
void RAND_COLOR();//랜덤으로 색 지정
void game();

////////////7.기타

void x_sound();//오답일때 땡-! 소리 출력
int sec_to_min_sec();//000초를 00분00초로 변환

///////////////////////////////////////////////////////////////////////////////////////////메인함수
int main()
{
    while (1)
    {
        //메인메뉴
        ///////////////////////6번>2번 게임하려면 RAND_COLOR();주석 풀어야 함
       //RAND_COLOR();
        printf("\n================================================================================\n");
        printf("1.단어검색  2.삭제  3.추가  4.출력  5.화면지우기  6.단어게임  7.단어복습  8.종료  \n");
        printf("\n================================================================================\n");
        printf("원하는 번호를 선택하세요>>");
        scanf_s("%d", &menu);

        if (menu == 1)
        {
            voca_search();
        }
        else if (menu == 2)
        {
            eliminate();
        }
        else if (menu == 3)
        {
            add();
        }
        else if (menu == 4)
        {
            print();
        }
        else if (menu == 5)
        {
            clear();
        }
        else if (menu == 6)
        {
            voca_game();
        }
        else if (menu == 7)
        {
            review();
        }
        else if (menu == 8)
        {
            break;

        }

        else
        {
            printf("잘못 누르셨습니다.\n");
            printf("알맞은 번호를 입력하세요.\n");
        }

    }
}

///////////////////////////////////////////////////////////////////////////////////////////함수정의

//1.단어검색
void voca_search()
{
    printf("단어검색을 선택하셨습니다.\n");
    printf("무엇이 궁금하신가요? ([1]영→한 [2]한→영 ):");
    scanf_s("%d", &voca_search_menu);
    switch (voca_search_menu)
    {
    case 1:
    {

        printf("영→한 선택\n");
        printf("찾고싶은 단어의 영어철자를 입력하세요\n");
        scanf_s("%s", &find_voca, 30);//찾고자 하는 단어를 입력 받는다
        printf("%s를 검색합니다!\n", find_voca);

        for (int i = 0; i < voca_cnt; i++)//포문으로 10개의 단어를 비교
        {

            for (int j = 0; j < 30; j++)//각 단어를 한글자 한글자 비교
            {

                if (voca_eng[i][j] != find_voca[j]) //단어 철자가 하나라도 다른경우
                    break;//233줄의 포문에서 빠져나와 230줄의 포문으로 가서 그 다음 단어와 비교
                else if (voca_kor[i][j] == '\0' && find_voca[j] == '\0')//공백문자가 나올때까지 단어 철자가 모두같으면
                {
                    printf("단어를 찾았습니다!!\n");//단어를 찾았다는 메시지 출력
                    printf("%s는 %s입니다!!", find_voca, voca_kor[i]);
                    check = 1;//이름을 찾으면 check에 1을 저장하여 밑의 247줄을 만족해 230번 포문을 빠져 나온다
                    break;//233줄 포문 빠져나온다
                }
            }

            if (check == 1)//찾은 경우 반복문 바로 탈출
            {
                check = 0;//다음을 위해 0으로 다시 바꿔놓는다.
                break;
            }
            if (i == voca_cnt - 1 && check == 0)    //끝까지 돌았는데 못 찾은 경우(10번째이름까지 봤으면서 찾지 못하였기 때문에 check가 0
                printf("없는 단어입니다.\n");
        }
        break;
    }


    case 2://case:1과 같은 방식
    {

        printf("한→영 선택\n");
        printf("찾고자 하는 단어의 한글 뜻을 입력하세요!\n");
        scanf_s("%s", &find_voca, 30);
        printf("%s를 검색합니다!\n", find_voca);
        for (int i = 0; i < voca_cnt; i++)
        {
            int check = 0;
            for (int j = 0; j < 30; j++)
            {

                if (voca_kor[i][j] != find_voca[j])
                    break;
                else
                {
                    if (voca_kor[i][j] == '\0' && find_voca[j] == '\0')
                    {

                        printf("단어를 찾았습니다!!\n");
                        printf("%s는 %s입니다!!", find_voca, voca_eng[i]);
                        check = 1;
                        break;
                    }
                }
            }

            if (check == 1)
            {
                check = 0;
                break;
            }
            if (i == voca_cnt - 1 && check == 0)
                printf("없는 단어입니다.\n");
        }
        break;
    }

    }


}

//2.삭제
void eliminate()
{
    printf("삭제하고싶은 단어의 번호를 입력하세요.\n");
    scanf_s("%d", &index);
    if (index < voca_cnt)//삭제하고 싶은 단어의 인덱스가 범위안에 있다면
    {
        for (int i = index; i < voca_cnt; i++)// 삭제하고싶은 단어의 다음 단어부터 마지막 단어까지 
        {
            for (int j = 0; j < 30; j++)//한줄씩 앞당겨 덮어쓴다.
            {
                voca_eng[i][j] = voca_eng[i + 1][j];
                voca_kor[i][j] = voca_kor[i + 1][j];
            }


        }
        voca_cnt--;//단어 하나 삭제되었으니 단어개수--;
    }
    printf("삭제완료\n");
}

//3.추가
void add()
{
    printf("단어를 추가합니다.\n");
    printf("영어 단어를 입력하세요!:\n");
    scanf_s("%s", voca_eng[voca_cnt], 30);//맨마지막인덱스에 추가
    printf("한글 뜻을 입력하세요!:\n");
    scanf_s("%s", &voca_kor[voca_cnt], 30);
    printf("추가되었습니다.\n");
    voca_cnt++;
}

//4.출력
void print()
{
    printf("\n번호        영어      한글\n");
    printf("============================================================\n");
    for (int i = 0; i < voca_cnt; i++)
    {
        printf("%3d.%-10s %-13s\n", i + 1, voca_eng[i], voca_kor[i]);
    }
}

//5.화면지우기
void clear()
{
    system("cls");
}

//6.단어게임
void voca_game()
{
    printf("번호를 선택하세요[1.학습 2.게임]\n");//학습,게임 두가지 중 하나 선택
    scanf_s("%d", &voca_game_menu);
    if (voca_game_menu == 1)
        study();
    else if (voca_game_menu == 2)
        game();
    else
    {
        printf("잘못입력하셨습니다. 다시 번호를 선택하세요\n");
        voca_game();
    }
}

//6-0.단어게임
print_voca_one(int a)
{
    printf("%3d.%-10s %-13s\n", a + 1, voca_eng[a], voca_kor[a]); //원하는 단어 하나만 출력하는 함수
}

//6-1.단어암기
void study()
{

    study_step1();//1단계 학습:단어를 보고 한번씩 따라 써본다.
    study_step2();//2단계 학습: 단어의 한글뜻을 가리고 맞으면 넘어가고 틀리면 3번 따라쓴다.
    for (int i = 1; i < 4; i++)//2단계학습은 2-1,2-2,2-3 이렇게 총 3번의 학습이 있는데 이를 학습하는 시간을 측정
    {
        step2_time = step2_time + stopwatch[i];

    }
    printf("\n[[2단계 학습 시간:");//출력
    sec_to_min_sec(step2_time);//초를 00분00초 형식으로 바꿔주는 함수사용
    printf("]]");
    Sleep(5000);

    study_step3();//3단계 학습: 2단계의 학습에서 3번 모두 틀린 단어만 모아 복습한다.

    for (int i = 0; i < 5; i++)//학습 1~3단계의 총 학습시간을 측정하여 출력
    {
        total_time = total_time + stopwatch[i];
    }
    printf("\n[[총 단어학습 시간:");
    sec_to_min_sec(total_time);
    printf("]]");
    Sleep(10000);

}
void study_step1()//1단계학습
{
    start = clock();//학습시간 측정시작
    printf("\n1단계 학습을 시작합니다.\n");
    printf("단어와 친해지자!\n");
    printf("단어를 보고 한글 뜻을 똑같이 입력하여 친해지자!\n");
    for (a = 0; a < voca_cnt; a++)//단어를 하나씩 출력하고 한번씩 입력받는다.
    {
        print_voca_one(a);
        scanf_s("%s", &input_voca, 30);

    }
    end = clock();//학습시간 측정 끝
    stopwatch[0] = (double)(end - start) / CLOCKS_PER_SEC;//끝시간-시작시간 하여 실행시간을 구함
    round(stopwatch[0]);//반올림
    (int)stopwatch[0];//소수점 버림
    printf("\n[[1단계 학습 시간:");
    sec_to_min_sec(stopwatch[0]);
    printf("]]");

    Sleep(5000);//다음단계학습으로 가기전 잠깐 멈춤



}

void study_step2()//2단계학습
{
    system("cls");//화면 지움
    printf("2단계 학습을 시작합니다.\n");
    printf("단어를 암기하자!\n");
    printf("3번 반복 학습하여 단어를 암기하자!\n");

    Sleep(5000);
    system("cls");

    test();//단어를 보고 맞으면 다음단어로 넘어가고 틀리면 3번 쓰게하는 함수(이걸 3번반복)
    print_score();//점수 출력
}
void test()
{
    int test[3] = { 0,0,0 };
    for (int i = 0; i < 3; i++)
    {
        // int test[3] = {0.0,0};
        start = clock();//학습시간 측정시작
        system("cls");
        printf("%d번째 학습\n", i + 1);
        int p = 0;

        for (int pp = 0; pp < voca_cnt; pp++)
        {
            // printf("\n단어를 보고 알맞은 답을 쓰세요\n");
            printf("  단어\t\t\t틀린횟수\n");
            printf("%3d.%-13s\t%-13d \n", pp + 1, voca_eng[pp], x[pp]);//한글뜻은 나오지않고 영어단어만 출력
            scanf_s("%s", &test_voca[p], 30);//한글뜻 입력받는다
            //printf("\n %s를 입력했다 잘 입력됬나?\n", test_voca[t]);//입력한대로 출력되는지 확인

            while (p >= 0 && p < voca_cnt)////단어 검색할때와 동일한 방식으로 맞는 단어뜻을 적었는지 검사
            {
                int check = 0;
                for (int q = 0; q < 30; q++)
                {
                    if (voca_kor[p][q] != test_voca[p][q]) //오답인 경우
                    {
                        x_sound();//함수이용하여 땡- 소리나게
                        printf("오답!\t알맞게 3번 입력하세요\n");
                        x[pp]++;//틀린횟수 저장
                        test[i]++;
                        print_voca_one(p);
                        //     printf("저장되있는거:%s입력한거:%s\n", &voca_kor[t], &test_voca[t]);//잘저장되고 출력되는지 확인
                        scanf_s("%s %s %s", &input_voca, 30, &input_voca, 30, &input_voca, 30);//틀린단어 3번 입력하여 연습

                        check = 1;
                        break;

                    }
                    else
                    {
                        if (voca_kor[p][q] == '\0' && test_voca[p][q] == '\0') //정답
                        {

                            printf("정답!\n");
                            Sleep(100);

                            o[pp]++;//맞은횟수 저장
                            score[pp]++;//점수 저장
                            //  printf("%s는 %s입니다!!\n", test_voca, voca_kor[t]);//시험용
                            check = 1;

                            break;
                        }
                    }
                }
                p++;

                if (check == 1)
                {
                    check = 0;
                    break;
                }


            }
        }

        end = clock();//학습시간 측정 끝
        stopwatch[i + 1] = (double)(end - start) / CLOCKS_PER_SEC;
        round(stopwatch[i + 1]);//반올림
        (int)stopwatch[i + 1];//소수점 버림

        printf("\n[[");
        sec_to_min_sec(stopwatch[i + 1]);
        printf("]]");
        for (int z = 0; z < 3; z++)
        {
            printf("\n[[%d번째 학습 틀린 개수:%d]]\n", z + 1, test[z]);
        }
        //printf("\n[[틀린 개수:%d]]", test[z]);

        // printf("%d 초", stopwatch[i + 1]);
        Sleep(5000);

    }
}
void print_score()
{
    printf("\n[[점수]]\n");
    printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    printf("번호          영어   한글   맞은횟수   틀린횟수   점수");
    for (int i = 0; i < voca_cnt; i++)
    {
        printf("\n%-10d %-10s %-13s %-10d %-10d %-10d\n", i, voca_eng[i], voca_kor[i], o[i], x[i], score[i]);
    }

}

void study_step3()
{
    start = clock();

    printf("\n3단계 학습을 시작합니다!\n");
    printf("단어를 복습하자!\n");
    printf("이전 단계학습에서 3번 모두 틀린 단어를 모아 복습합니다.\n");
    for (int i = 0; i < voca_cnt; i++)
    {
        if (score[i] == 0)
        {
            print_voca_one(i);
            printf("단어를 따라 쓰세요.\n");
            scanf_s("%s", &input_voca, 30);

        }
    }
    end = clock();
    stopwatch[4] = (double)(end - start) / CLOCKS_PER_SEC;
    round(stopwatch[4]);//반올림
    (int)stopwatch[4];//소수점 버림
    printf("\n[[3단계 학습 시간:");
    sec_to_min_sec(stopwatch[4]);
    printf("]]");
    Sleep(1000);


}

//6-2.단어게임//단어시험의 점수가 그림의 완성도를 결정하는 게임
void game()
{
    system("cls");
    printf("[[게임설명]]\n");//게임 설명
    printf("단어문제가 총 10개 출제됩니다.\n");
    printf("정답을 맞추면 10가지 색깔의 물감중 하나를 드려요\n ");
    printf("물감을 최대한 많이 획득하여 그림을 완성하세요!\n");
    printf("(나에게 없는 색깔이 필요한 칸에는 랜덤색깔로 나타납니다)");
    Sleep(3000);
    system("cls");


    printf("무슨 그림일까??\n");
    print_drawing();
    Sleep(1000);
    system("cls");
    gaming();
}

void print_drawing()//미리 선언한 bird 이차원 배열의 0~9까지의 숫자에 각각의 색이 지정되어 있다.
{
    for (int i = 0; i < 17; i++)// 예를들어 (i,j)가0번이면서 시험점수가9점이상이면 0번에 모두 하늘색을 칠한다.
    {
        for (int j = 0; j < 11; j++)//시험점수와 그림완성도가 비례하게끔 적절히 조건을 조정하였다.
        {

            if (bird[i][j] == 0 && color > 9)//0번인 하늘색은 배경색이기 때문에 가장 많은 부분을 차지하기 때문에 10문제를 다맞아야 모두 출력되게함
            {
                SKY_BLUE
                    printf("■");
            }
            else if (bird[i][j] == 0 && color > 2 && j % 2 == 1)//하늘색 홀수번째 세로줄만 출력
            {
                SKY_BLUE
                    printf("■");
            }
            else if (bird[i][j] == 1 && color > 7)
            {
                RED
                    printf("■");
            }
            else if (bird[i][j] == 2 && color > 6)
            {
                YELLOW
                    printf("■");
            }
            else if (bird[i][j] == 3 && color > 5)
            {
                BLUE
                    printf("■");
            }
            else if (bird[i][j] == 0 && color > 4 && i % 2 == 1)//하늘색 홀수번째 가로줄만 출력
            {
                SKY_BLUE
                    printf("■");
            }
            else if (bird[i][j] == 5 && color > 3)
            {
                HIGH_GREEN
                    printf("■");
            }
            else if (bird[i][j] == 6 && color > 2)
            {
                PURPLE
                    printf("■");
            }
            else if (bird[i][j] == 7 || bird[i][j] == 4 && color > 1)
            {
                GOLD
                    printf("■");
            }
            else if (bird[i][j] == 8 && color > 8)
            {
                BLACK
                    printf("■");
            }
            else if (bird[i][j] == 9 && color > 0)
            {
                WHITE
                    printf("■");
            }
            else
            {
                RAND_COLOR();
                printf("■");
            }


        }
        printf("\n");
    }
}
void gaming()
{
    for (int pp = 0; pp < voca_cnt; pp++)
    {

        Sleep(1000);
        //  system("cls");
        ORIGINAL
            printf("\n단어를 보고 알맞은 답을 쓰세요\n");
        printf("  단어\n");
        printf("%3d.%-13s\t \n", pp, voca_eng[pp]);
        scanf_s("%s", &test_voca[p], 30);
        //printf("\n %s를 입력했다 잘 입력됬나?\n", test_voca[t]);//시험용

        while (p >= 0 && p < voca_cnt)
        {

            int check = 0;
            for (int j = 0; j < 30; j++)
            {
                if (voca_kor[p][j] != test_voca[p][j])
                {
                    x_sound();
                    printf("오답!\n");
                    printf("물감 획득 실패!\n");
                    printf("[[물감 10가지 색깔 중 %d가지 이용중!!]]\n", color);
                    printf("정답");//답지 출력
                    print_voca_one(p);
                    //     printf("저장되있는거:%s입력한거:%s\n", &voca_kor[t], &test_voca[t]);//테스트용


                    check = 1;

                    break;

                }
                else
                {
                    if (voca_kor[p][j] == '\0' && test_voca[p][j] == '\0')
                    {
                        color++;//물감수 증가
                        printf("정답!\n");
                        printf("물감 획득!\n");

                        printf("[[물감 10가지 색깔 중 %d가지 이용중!!]]\n", color);
                        Sleep(1000);


                        //  printf("%s는 %s입니다!!\n", test_voca, voca_kor[t]);//테스트용
                        check = 1;

                        break;
                    }
                }
            }
            p++;

            if (check == 1)
            {
                check = 0;
                break;
            }


        }

        print_drawing();//중간 그림 출력
    }



}
void RAND_COLOR() //색 랜덤으로 출력

{

    int num;

    num = rand() % 14; //0~13랜덤



    if (num == 0)

        DARK_BLUE

    else if (num == 1)

        GREEN

    else if (num == 2)

        BLUE_GREEN

    else if (num == 3)

        BLOOD

    else if (num == 4)

        PURPLE

    else if (num == 5)

        GOLD

    else if (num == 6)

        ORIGINAL

    else if (num == 7)

        GRAY

    else if (num == 8)

        BLUE

    else if (num == 9)

        HIGH_GREEN

    else if (num == 10)

        SKY_BLUE

    else if (num == 11)

        RED

    else if (num == 12)

        PLUM

    else if (num == 13)

        YELLOW

}


//7.기타


void x_sound()//땡-! 소리 출력
{
    Beep(MI, 800);
}

int sec_to_min_sec(int ms)
{
    min = ms / 60;
    sec = ms % 60;

    return printf("%d분%d초", min, sec);
}//000초를 00분00초로 변환

void review()
{
    /*
    (복습은 단계를 두단계만 했다. 완벽하게 외우게 여러번 반복 시킬 순 있지만 계속 누적되어 양이 많아지니 일단은 두단계만!)

    복습
    1단계: 2-1 학습을 한번만 한다.
    2단계: 1단계 학습을 할 때 틀린 단어 3번 다시 쓴다.


    틀린 단어들 출력
    단어 항목은 처음부터 어제 암기분까지.
    시간측정은 1단계~2단계
    */

    //설명
    printf("\n\n누적 복습\n");
    printf("처음부터 어제 암기한 곳 까지 복습하기.\n");
    Sleep(2000);

    start = clock();//학습시간 측정시작
    system("cls");
    int i = 0;
    p = 0;
    //1단계
    for (int pp = 0; pp < voca_cnt; pp++)
    {
        printf("\n\n단어를 보고 알맞은 답을 쓰세요\n");
        // printf("  단어\t\t틀린횟수\n");
        printf("%3d.%-13s\t%-13d \n", pp + 1, voca_eng[pp], x[pp]);//한글뜻은 나오지않고 영어단어만 출력
        scanf_s("%s", &test_voca[p], 30);//한글뜻 입력받는다
        //printf("\n %s를 입력했다 잘 입력됬나?\n", test_voca[t]);//입력한대로 출력되는지 확인

        while (p >= 0 && p < voca_cnt)////단어 검색할때와 동일한 방식으로 맞는 단어뜻을 적었는지 검사
        {
            int check = 0;
            for (int q = 0; q < 30; q++)
            {
                if (voca_kor[p][q] != test_voca[p][q]) //오답인 경우
                {
                    x_sound();//함수이용하여 땡- 소리나게
                    printf("오답!\t알맞게 3번 입력하세요\n");
                    x[pp]++;//틀린횟수 저장
                    print_voca_one(p);
                    //     printf("저장되있는거:%s입력한거:%s\n", &voca_kor[t], &test_voca[t]);//잘저장되고 출력되는지 확인
                    scanf_s("%s %s %s", &input_voca, 30, &input_voca, 30, &input_voca, 30);//틀린단어 3번 입력하여 연습

                    check = 1;
                    break;

                }
                else
                {
                    if (voca_kor[p][q] == '\0' && test_voca[p][q] == '\0') //정답
                    {

                        printf("정답!\n");
                        Sleep(100);

                        o[pp]++;//맞은횟수 저장
                        score[pp]++;//점수 저장
                        //  printf("%s는 %s입니다!!\n", test_voca, voca_kor[t]);//시험용
                        check = 1;

                        break;
                    }
                }
            }
            p++;

            if (check == 1)
            {
                check = 0;
                break;
            }


        }
    }

    end = clock();//학습시간 측정 끝
    stopwatch[i + 1] = (double)(end - start) / CLOCKS_PER_SEC;
    round(stopwatch[i + 1]);//반올림
    (int)stopwatch[i + 1];//소수점 버림
    printf("%d 초", stopwatch[i + 1]);
    Sleep(5000);

    //틀린 단어 목록
    printf("\n틀린 단어 목록\n");
    for (int i = 0; i < voca_cnt; i++)
    {
        if (score[i] == 0)
        {
            print_voca_one(i);

        }
    }
    Sleep(5000);

    //2단계
    start = clock();

    //printf("\n3단계 학습을 시작합니다!\n");
    //printf("단어를 복습하자!\n");
    //printf("이전 단계학습에서 3번 모두 틀린 단어를 모아 복습합니다.\n");
    printf("\n\n복습 단어중 틀린 단어 3번 쓰기\n");

    for (int i = 0; i < voca_cnt; i++)
    {
        if (score[i] == 0)
        {
            print_voca_one(i);
            printf("3번 영어와 한글 뜻을 소리내어 읽으세요.\n");
            scanf_s("%s %s %s", &input_voca, 30, &input_voca, 30, &input_voca, 30);

        }
    }
    end = clock();
    stopwatch[4] = (double)(end - start) / CLOCKS_PER_SEC;
    round(stopwatch[4]);//반올림
    (int)stopwatch[4];//소수점 버림
    printf("%d 초", stopwatch[4]);
    Sleep(1000);


    //총 복습시간 출력
    for (int i = 0; i < 5; i++)//학습 1~3단계의 총 학습시간을 측정하여 출력
    {
        total_time = total_time + stopwatch[i];
    }
    printf("\n\n[[총 단어학습 시간:");
    sec_to_min_sec(total_time);
    printf("]]");
    Sleep(10000);

}