/*
�ܾ� ������ �ٲ�� �ٲܰ͵�
����:voca_cnt
�迭:���� ��
�Լ�:
�ܾ���� ���°� ���� ��� �����ְ� ���� �����ϸ� �¾Ҵ��� Ʋ�ȴ��� üũ�ϰ� �����߰ڴ�
���� �����ϰ�
*/

////////////////////////////////////////////////////////////////////////////////////////�������
#include<stdio.h>
#include<windows.h>
#include <string.h>
#include <time.h>
#include<math.h>

////////////////////////////////////////////////////////////////////////////////////////��������

//0.�⺻
int menu = 0;
int voca_cnt = 103;

//1.�ܾ�˻�
int voca_search_menu = 0;
int check = 0;

//2.����
int index = 0;

//6.0.�ܾ����
int voca_game_menu = 0;

//6.1.�н�
int a = 0;//÷��
int p = 0;//÷��
#define DO 327 //��
#define MI    412 //��
#define SOL   489 //��
#define _DO    654 //��

//6.2.����
//����

#define COL GetStdHandle(STD_OUTPUT_HANDLE)    //�۾� ���� ����

#define BLACK SetConsoleTextAttribute(COL,0x0000);  //����

#define DARK_BLUE SetConsoleTextAttribute(COL,0x0001); //���� �Ķ���

#define GREEN SetConsoleTextAttribute(COL,0x0002);  //�ʷϻ�

#define BLUE_GREEN SetConsoleTextAttribute(COL,0x0003); //û�ϻ�

#define BLOOD SetConsoleTextAttribute(COL,0x0004);  //�˺�����

#define PURPLE SetConsoleTextAttribute(COL,0x0005);  //�����

#define GOLD SetConsoleTextAttribute(COL,0x0006);  //�ݻ�

#define ORIGINAL SetConsoleTextAttribute(COL,0x0007); //���

#define GRAY SetConsoleTextAttribute(COL,0x0008);  //ȸ��

#define BLUE SetConsoleTextAttribute(COL,0x0009);  //�Ķ���

#define HIGH_GREEN SetConsoleTextAttribute(COL,0x000a); //���λ�

#define SKY_BLUE SetConsoleTextAttribute(COL,0x000b); //�ϴû�

#define RED SetConsoleTextAttribute(COL,0x000c);  //������

#define PLUM SetConsoleTextAttribute(COL,0x000d);  //���ֻ�

#define YELLOW SetConsoleTextAttribute(COL,0x000e);  //�����

#define WHITE SetConsoleTextAttribute(COL,0x000f);//�Ͼ��


int color = 0;//�������� ���� ����

//7.��Ÿ
clock_t start, end;//�ð������Ҷ� ���
int min = 0;
int sec = 0;
int ms = 0;
int total_time = 0;
int step2_time = 0;

////////////////////////////////////////////////////////////////////////////////////////�迭����
//0.�⺻ 
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
       "���,���",
   "�迭�ϴ�",
   "����ϴ�",
   "����",
   "�����ϴ�",
   "����Ű��",
   "�ƴ�",
   "�������",
   "���θ���",
   "����",
   "����/�����ϴ�",
   "������",
   "�����ϴ�",
   "�����ٺ���",
   "���",
   "ä���",
   "�ڼ������캸��",
   "�ٵ��",
   "�����ϴ�",
   "������",
   "��/�����ϴ�",
   "���",
   "����/�����ϴ�",
   "�����ϴ�",
   "�����ϴ�",
   "����/�����ϴ�",
   "�״�",
   "�״�/�״������ϴ�",
   "�ѷ��δ�",
   "�����ϴ�",
   "�Դ�",
   "����/�����αܾ������",
   "����",
   "��/�����ϴ�",
   "��/���Ľ�Ű��",
   "�÷��׸��ȴ�",
   "�ǳʴ�",
   "�ɴ�",
   "�����ϴ�",
   "����",
   "���ߴ�",
   "����/�����ϴ�",
   "�Ĺ�/�ɴ�",
   "����/ö�ϴ�",
   "�۵��ϴ�,��ϴ�",
   "�׾ƿø�����/�״�",
   "�ڼ�ġ��",
   "�������ݴ�",
   "�Ѵ�",
   "��å�ϴ�",
   "����/�״�",
   "����/�����ϴ�",
   "������,����",
   "�����ϴ�,�����ϴ�",
   "����/ž���ϴ�",
   "Ʋ/���ڿ��ִ�",
   "�޽������ϴ�",
   "������",
   "�λ��ϴ�",
   "ġ���",
   "����/�����ϴ�",
   "Ȯ���ϴ�",
   "�丮��/�丮�ϴ�",
   "Ȧ¦�̴�",
   "~�������۾��ϴ�",
   "����",
   "�ѷ�����",
   "�����ִ�,����",
   "�����ϴ�",
   "��ϴ�",
   "���/��踦�̷��",
   "��ġ�ϴ�,����",
   "�۶߸���",
   "�۴�",
   "�Ļ��ϴ�",
   "���/ä���",
   "������Ű��",
   "��ȯ/��ȯ�ϴ�",
   "�ʱ��ϴ�",
   "�۴�",
   "���ø���",
   "�̾�����",
   "����/�з��ϴ�",
   "�ٴ����ϴ�",
   "ġ���",
   "�й���/�Ѹ���",
   "����",
   "�ű��",
   "�����ϴ�",
   "������",
   "��/�븦����",
   "�ⱸ/������",
   "�����ϴ�",
   "�ɴ�",
   "�ε�/�εο����",
   "��ġ�ϴ�",
   "�帮���,������",
   "��������",
   "���/�Խ��ϴ�",
   "����,�̷��ϴ�",
   "�߿ܿ���"
   */

   //////////day3-4
    /*
      "å�����ִ�",
  "�̿밡����",
  "�����ü�",
  "����/�����ϴ�",
  "����/�����ϴ�",
  "����,����",
  "���/����ϴ�",
  "�ް�/�����",
  "�Ⱓ",
  "�����ϴ�",
  "�����ϴ�",
  "�����ϴ�",
  "������",
  "å��/û���ϴ�",
  "���ͺ�",
  "�ǾƷ�",
  "��ȣ�ϴ�",
  "�����ϴ�",
  "����/����ϴ�",
  "�ֹ�/�ֹ��ϴ�",
  "����",
  "����/�����ϴ�",
  "û����/û���ϴ�",
  "����",
  "����/�����ϴ�",
  "���/����̵��",
  "�����ϴ�",
  "��������",
  "����ȸ",
  "�����ϴ�",
  "�߰��ϴ�",
  "����",
  "������",
  "������",
  "�μ��ϴ�",
  "~�������ϴ�",
  "����/�����ִ�",
  "�ʾ�",
  "~�������ϴ�",
  "����/������Ű��",
  "��ǰ/�����ϴ�",
  "�����ϴ�",
  "����",
  "����/������",
  "�˾Ƴ���",
  "����",
  "��������",
  "��ȸ",
  "��ǥ",
  "����",
  "����/���������",
  "����/ó���ϴ�",
  "����ó",
  "�ڹ��ϴ�",
  "��ȯ�ϴ�",
  "����",
  "��������",
  "�̵�/�̵��ϴ�",
  "û����",
  "�����ϴ�",
  "Ÿ����/Ÿ��",
  "��/�������̴�",
  "���,������",
  "����/������",
  "ǥ����/�����ϴ�",
  "����/�̸���",
  "ȭ��/�����ϴ�",
  "�����",
  "�ź���",
  "��������/�����ϴ�",
  "�����ϴ�",
  "����ϴ�",
  "~�����ϴ�",
  "Ȯ���ϴ�",
  "����ϴ�",
  "���ߴ�",
  "����",
  "�濵�ϴ�,������ϴ�",
  "~����û�ϴ�",
  "����ϴ�",
  "��õ�ϴ�",
  "����/�����ϴ�",
  "��θӸ�/���ϴ�",
  "~�����˴�",
  "�����ִ�",
  "���Ը����",
  "�޾Ƶ��̴�",
  "����Ű��",
  "����/���ɿ�",
  "�䱸�ϴ�",
  "�����ϴ�",
  "�̵�/�̵��ϴ�",
  "�ʾ~����",
  "����",
  "�ް�",
  "������",
  "�������ϴ�",
  "����/������/��������",
  "�ñ����ϴ�",
  "����/�������κ�����",
  "~�ϱ�εǾ��ִ�"
  */
  //////////day5-6
 /*
 "�ĺ���",
 "����",
 "��ü�ϴ�",
 "~���Ǿ�߰����ϴ�",
 "����/�����ϴ�",
 "ȫ��",
 "��ȭ/�ű��",
 "����",
 "�����λ�������",
 "�극�ν�����ϴ�",
 "�ǵ��",
 "Ȯ���ϴ�",
 "������",
 "������",
 "�����ϴ�",
 "�ٰ�����",
 "�����ϴ�",
 "��ġ�ϴ�",
 "����ü",
 "�Ӹ��ϴ�",
 "�����ϴ�",
 "��ġ��Ű��",
 "�����",
 "�����ϴ�",
 "�����ϴ�",
 "�����ϴ�",
 "�߰��Ǵ°�/�߰���/�߰���",
 "����",
 "����ϴ�",
 "����",
 "����",
 "�ݵ��~�ϴ�",
 "��������",
 "����/�����ϴ�",
 "�ü�",
 "����/�����ִ�",
 "���/�߰��ϴ�",
 "������",
 "�鸣��",
 "ó����",
 "�غ��ϴ�",
 "����",
 "�����/������",
 "���",
 "�׻��̿�",
 "�Ӵ���/�Ӵ��ϴ�",
 "���𵨸�",
 "�λ�/�ø���",
 "�ؿ���/�ؿܿ�",
 "����/�����ϴ�",
 "Ȯ��Ǵ�",
 "������",
 "ȫ���ϴ�",
 "���/����ϴ�",
 "����",
 "�α��ִ�",
 "�̷��",
 "����/�����������",
 "�谨�ϴ�",
 "�ڰ����ִ�",
 "�̿�",
 "��������/������",
 "�´�/�ٷ����",
 "�����ϴ�",
 "����/�����ϰ��ϴ�",
 "�ո�����",
 "��������",
 "����",
 "�ڽ���/�����ϴ�",
 "������",
 "���峭",
 "�а����ؾ������",
 "����/������",
 "�����ϴ�",
 "��å",
 "~�ΰͰ���",
 "���ι�",
 "���ڽ�Ű��",
 "�Ӵ�/�Ӵ��ϴ�",
 "ȥ����",
 "~�����˾ƺ���",
 "���/����ϴ�",
 "���",
 "����ì�ܵδ�",
 "���",
 "�۰�",
 "��",
 "������",
 "���",
 "����/�����ϴ�",
 "�ߴ��ϴ�",
 "������Ʈ/�����ϴ�",
 "����/������",
 "����",
 "����",
 "�ջ��Ű��",
 "�����ϴ�",
 "�׷����ϸ�",
 "�ջ��",
 "�ð�����",
 */

 //////////day7-8
/*
"�����ִ�",
"�����ϴ�",
"����/�����ϴ�",
"������",
"���",
"ǰ����",
"ȯ�Ұ�����",
"���Ի��/����ϴ�",
"��ǻ�ͷ�",
"����",
"����/�������ִ�",
"�ڼ�",
"����",
"������",
"����/����",
"�濵��,����",
"�����ϴ�",
"������",
"����ǰ",
"����",
"����",
"����/���ư���",
"�ŷ�����",
"����ϴ�",
"����/�����ϴ�",
"����",
"����/���߿�",
"��",
"�нǵ�",
"���õ�/����",
"������/�����ϴ�",
"��ġ",
"�Ǹ���",
"�ذ��ϴ�",
"���λ���/�����˴�",
"����ϴ�",
"ȥ��/ȥ���ϴ�",
"����",
"����丮",
"����",
"����û���ϴ�",
"�ϰ�/�ϻ�����",
"�����ϴ�",
"������ϱ�/����ϴ�",
"����",
"Ÿ�������ִ�",
"���θ�/���θ���",
"������ü",
"�����ϴ�",
"������",
"��/�����ϴ�",
"���/�����̴�",
"���ǰ",
"���/����ϴ�",
"����/��ǥ�ϴ�",
"�ÿ�,����",
"�丮��",
"�����ϴ�",
"���ϴ�",
"���/�����",
"������",
"��/�����ִ�",
"�Ŀ���,��",
"�漺������",
"�ڼ�",
"����",
"������,�米����",
"��������",
"��������/�ȳ��ϴ�",
"������/�����ϴ�",
"����ִ�",
"�ָ��Ҹ���",
"�����",
"����/�����ϴ�",
"�����ϴ�",
"�㰡/����ϴ�",
"�����ϴ�",
"�Ҹ�/�Ҹ��ϴ�",
"�����Ӱ�",
"��Ȯ��",
"����/���ӵǴ�",
"�ָ��ϴ�",
"�ٰ�",
"����Ű��",
"��ü",
"����",
"��/�����ϴ�",
"����ϴ�",
"������",
"���̶���Ʈ/�����ϴ�",
"���ִ�",
"����ϴ�",
"��������",
"�����ϴ�",
"����/�������ִ�",
"����/�������ñ��",
"����",
"�ǿ�����",
"�ڿ�������/�ڿ������ϴ�",
"~�ε��ƿ���"
*/
////////// day9-10

"�����ϴ�",
"�ų���",
"������",
"~������ϴ�",
"���ߴ�,�����ϴ�",
"���,����",
"�ȳ����",
"������",
"����/�����ϴ�",
"���/����ϴ�",
"����/���忡������",
"����",
"����/�����ϴ�",
"��ȣ����",
"Ȯ���ϴ�",
"�˸�",
"��Ư��",
"���/��︮��",
"����,�����",
"�������ִ�",
"���簡�ִ�",
"�����ϴ�",
"�����",
"����",
"ü����",
"�Ұ��ϴ�",
"�����",
"�غ��ϴ�",
"��ġ",
"�ð��̰ɸ���",
"�����",
"�ֽ���",
"����ϴ�",
"��������",
"��ǥ/��ǥ�ϴ�",
"��ȸ��/��ȸ�ϴ�",
"�ڱ�/�ڱ��������ϴ�",
"������",
"����/�����ϴ�",
"�����ϴ�",
"������/��������",
"���",
"���/��Ͽ��ƴ�",
"~�Ұ�츦����ؼ�",
"����/�������ִ�",
"���Ǵ�",
"�����ϴ�",
"�̲�����",
"����/������",
"����",
"��������~�ϴ�",
"���ѵ�",
"�Ʒ��ϴ�",
"ȸ��/ȸ���ϴ�",
"�Ѿ�/�Ѱ���/�հ谡~���Ǵ�",
"ģ����",
"����/������",
"�¼�",
"�Ŀ�/�Ŀ��ϴ�",
"�켱����",
"�ǽ���",
"�����ϴ�",
"������",
"����ϴ�",
"�߻��ϴ�",
"����",
"��ġ,�ι�",
"������",
"�Һ��ϴ�",
"����ǰ",
"����/�����ϴ�",
"����/�����ϴ�",
"Ž���ϴ�",
"���",
"�����ϴ�",
"�պ�",
"�޽�/����",
"��ȸ",
"���������",
"�޿��Ѿ�",
"����",
"��������",
"���׷��̵�/���׷��̵��ϴ�",
"�븮��",
"����/�����ϴ�",
"����/ġ���ϴ�,�ٷ��",
"����",
"�ʿ�/�ʿ���ϴ�",
"��������",
"â��",
"�ֹ�",
"��������",
"���������",
"�����",
"������",
"û��",
"�϶�/�϶��ϴ�",
"�Ǹ��ϴ�,����ϴ�",
"�پ���",
"������",
"����ϴ�"

//////////day11-12
/*
"�濵/�����ϴ�",
"�����ϴ�",
"���/����ϴ�",
"�����ϴ�",
"����/�����ϴ�",
"�����ϴ�",
"��Ÿ����",
"�Ҵ��ϴ�",
"�����ϴ�",
"��������ġ��",
"�����ϴ�",
"÷���ϴ�",
"����/ä���ϴ�",
"����ϴ�",
"��ȭ�ϴ�",
"�����ϴ�",
"������/�����ϴ�",
"�������ϴ�",
"�����ϴ�",
"�������ִ�",
"����/�����ϴ�,�����ϴ�",
"�����ϴ�",
"Ȯ���ϴ�",
"�޴�",
"�����ϴ�",
"�����ϴ�",
"�и����ϴ�",
"����/������Ű��",
"�پ��ϴ�",
"�����ϴ�,�����ϴ�",
"��ȣ�ϴ�",
"�����ϴ�",
"��ȯ�ϴ�",
"ȹ���ϴ�",
"�����ϴ�",
"�����ϴ�,����ϴ�",
"�ٴ�",
"��û�ϴ�",
"�Ҵ��ϴ�",
"�����ϴ�,�����ϴ�",
"��ȭ��Ű��",
"�����ϴ�,���ô�",
"�����ϴ�",
"�ʷ��ϴ�",
"�����ϴ�",
"�ż���ó���ϴ�",
"�����ϴ�",
"�����ϴ�",
"�۱��ϴ�",
"����������",
"����/���������",
"������,���б�/�ִ�",
"����ϴ�",
"�ż���/ǥ���ϴ�",
"����ϴ�,�����ϴ�",
"����/�����ϴ�",
"�����ϴ�",
"�����ϴ�,���ý�Ű��",
"���ϴ�,ã��",
"�巯����",
"���ϴ�",
"�ι���/�ι谡�Ǵ�",
"ȹ���ϴ�,�μ��ϴ�",
"�����ϴ�",
"�պ��ϴ�",
"�ǵ��ϴ�",
"�˸���",
"�ʰ��ϴ�",
"�����ϴ�,�������ִ�",
"�ؼ��ϴ�",
"�����ϴ�,�ߴܽ�Ű��",
"������",
"�߻���Ű��",
"öȸ�ϴ�,�����ϴ�",
"�ڰ����ִ�",
"�ؼ��ϴ�",
"Ÿ��/Ÿ���ϴ�,�ջ��Ű��",
"�����ϴ�",
"�簳�ϴ�",
"����/���並�����ϴ�",
"�����ϴ�",
"���̴�,�����ϴ�",
"������,������",
"�⼮��/�ִ�",
"�����ϴ�",
"�纻/������/�����ϴ�",
"��ȣ�ۿ��ϴ�,�����ϴ�",
"������",
"�پ�ȭ�ϴ�",
"�����ϴ�,����",
"�����ϴ�,�����ϴ�",
"Ȯ���ϴ�,�����ϴ�",
"�ΰ��ϴ�",
"û���ϴ�",
"�Ҵ�,�����ϴ�",
"�����ϴ�",
"����ϴ�,�����ϴ�",
"������Ű��",
"������,��������/�ɻ�����ϴ�",
"���̴�,�����ϴ�"
*/

//////////day13-14
/*
"�����ϴ�,�����ϴ�",
"�����ϴ�",
"�����ϴ�",
"�����ϴ�",
"�ٷ��,ó���ϴ�",
"�����ϴ�",
"�����ϴ�,�����ϴ�",
"�����ϴ�",
"���ϴ�",
"�����Ǵ�",
"������",
"�����ϴ�,�����ϴ�",
"�����ϴ�",
"�����ϴ�",
"����/�����ϴ�",
"����ϴ�",
"�����ϴ�",
"�����ϴ�",
"�߻��ϴ�",
"����ϴ�,�����ϴ�",
"���ô�,�����ϴ�",
"��������",
"�ؼ��ϴ�,�����ϴ�",
"�����Ű��",
"�����ϴ�",
"�������ϴ�",
"�����ϴ�",
"������/������",
"�����ִ�",
"�����ϴ�",
"�ڰ������",
"�ʰ��ϴ�",
"�����ϴ�",
"�����ϴ�,����ϴ�",
"�����ϴ�",
"����/�����ϴ�",
"���,����/�ݴ��ϴ�",
"����ϴ�",
"�����ϴ�",
"����/�����ϴ�",
"�����ϴ�",
"����/�����ϴ�",
"�ǵ��ư���",
"�����ϴ�",
"����ϴ�",
"���̴�",
"���ս�Ű��",
"Ȯ�����ϴ�",
"�����ϴ�,�����δ�",
"���/��ġ�ϴ�",
"�������ٽ����",
"�и���/�и��ϴ�",
"����ȸ/�����ϴ�",
"���ϴ�",
"�����ִ�,�����ϴ�",
"����ϴ�",
"�����ϴ�",
"��ǥ�ϴ�",
"�����ϴ�",
"�����ϴ�,�����ϴ�",
"������",
"å/�����ϴ�",
"����ϴ�,�����ϴ�",
"�뺸�ϴ�",
"��ǥ�ϴ�",
"����ϴ�",
"����Ǵ�",
"����ϴ�",
"�Ӹ��ϴ�,��������ϴ�",
"�ذ��ϴ�",
"���ߴ�",
"�����ϴ�",
"��ǥ/�ܳ��ϴ�",
"��̸�����",
"�����ϴ�",
"����ϴ�",
"�����ϴ�",
"�����ϴ�",
"�����ϴ�",
"�����ϴ�,������",
"�����ϴ�",
"�����ϴ�",
"���/����εǴ�",
"�̿��ϴ�",
"�����ϴ�",
"�����ϴ�,����ϴ�",
"���ս�Ű��",
"�ذ��ϴ�,�����ϴ�",
"ſ���ε�����",
"�����ϴ�",
"�ֿ��ϴ�,�Ŀ��ϴ�",
"�ٲٴ�",
"�����ϴ�",
"ó���ϴ�",
"�����ϴ�",
"�����ϴ�",
"�����ϴ�",
"Ȱ��ȭ�ϴ�",
"�����ϴ�",
"���ϴ�",
"���Ϲ�/�����ϴ�"
*/
//////////day15-16
/*
"������",
"��ȸ",
"���",
"����",
"����,����",
"����,����",
"�ڻ�",
"��,���",
"���",
"����",
"����/�����ϴ�",
"����",
"����",
"����",
"�ǹ�,����",
"����",
"����,����/���",
"����",
"����",
"ȯ��/ȯ���ϴ�",
"����,����",
"����/�����ϴ�",
"��ġ",
"������,��������",
"��ټ�",
"��õ",
"����,����",
"����/�ջ��ϴ�",
"����",
"����",
"����,�˻�",
"��ǥ/�ܳ��ϴ�",
"����",
"�ڷ�,���",
"��ȣ",
"����",
"�Ǹ���",
"�м�",
"�Ǽ�,����",
"�ǻ�",
"�ŷ�,ó��",
"��ü/����ϴ�",
"������",
"����,�ɼ�",
"��ǥ/�����ϴ�",
"����",
"����,��������",
"����,����",
"����",
"��ȸ��/�����ϴ�",
"��û/��û�ϴ�",
"�Ȱ�",
"����",
"����",
"������,����",
"�Ա�,����",
"�˸�/�ָ��ϴ�",
"����,ó��",
"������",
"����/~�������ϴ�",
"�б�,4����1",
"����",
"�ذ�",
"�ڿ�",
"�ؼ�",
"����",
"�ɷ�",
"Ȯ��,����",
"ȥ��",
"���꼺",
"����",
"�ؼ�",
"����",
"å��",
"�Һ�",
"��ȣ",
"����",
"���",
"�ǽ�",
"����",
"���",
"�㰡",
"�ܰ�",
"����",
"ȯ��,���",
"����",
"����",
"ȯ��",
"�����Ǿ�,����",
"��ȹ",
"���ͱ�",
"����",
"����/�����ϴ�",
"��",
"����",
"����/�����ϴ�",
"������,����ȸ/�Ƿ��ϴ�",
"���/�߻�����",
"����,���",
"Ư��/Ư�����ִ�"
*/

//////////day17-18
/*
"����",
"����",
"���",
"��������",
"����",
"����",
"����",
"������",
"�ʰ�/�ʰ���",
"���,�Ӹ�",
"����",
"����",
"����",
"������",
"����/�������ִ�",
"����",
"���",
"����",
"�籹,����",
"����",
"����",
"����/���Ǹ��ִ�",
"���",
"����,����",
"��ü,������",
"���ǽü�",
"����",
"�丮",
"ȸ��",
"���,����",
"�浹/�浹�ϴ�",
"���,����",
"����",
"����",
"����",
"���",
"����,���/�Ҹ��ϴ�",
"����",
"���,�ǿ�",
"����,���",
"����",
"�ǸŴ븮��",
"����",
"�ù��޿�",
"����Ȳ",
"����",
"������",
"����",
"�迭",
"��Ȳ",
"��������/�ϱ���",
"�ʿ�����",
"����",
"�غ�",
"���۵�/������۵������ʴ�",
"����",
"����,����",
"�غ�",
"����,����",
"�߰�",
"������",
"�䱸/�䱸�ϴ�",
"����,����/�����ϴ�",
"����",
"������",
"ȿ����",
"���",
"����",
"���/�����ϴ�",
"����,�Ἦ",
"Ȯ��",
"����",
"����",
"�ŷ�,�ڽŰ�",
"����/����",
"����/�ջ��Ű��",
"����",
"����",
"���",
"���",
"���",
"����,���",
"�Ÿ�",
"�ؼ�",
"��ǥ/��������",
"���,�ŷ�",
"����,����",
"��ġ/�����ϴ�",
"����",
"�Թ�",
"�������,����",
"����,��",
"����",
"����",
"�緮,������",
"����",
"����/�����ϴ�",
"å��",
"����/�����ϴ�",
"����",
"��ȯ"
*/

//////////day19-20
/*
"����/������/����Ű��",
"���,���/����ϴ�",
"����/�����ϴ�",
"����",
"�پ缺",
"����/�����ϴ�",
"����,��",
"���ڽü�",
"��ǰ��,����",
"����",
"����",
"���",
"��ǰ,���",
"�ܸ�,����",
"��å,��ġ/��ġ��Ű��",
"����",
"����",
"����,�㰡",
"�ӿ�/�濵��",
"�̷¼�",
"����",
"���డ",
"ȸ��",
"���/�����",
"��ǥ",
"ȸ��",
"����,���",
"����",
"����",
"Ȯ��",
"��õ��,����",
"�뵿/���ϴ�",
"����",
"�Һ�",
"����",
"�޿�",
"���",
"����",
"�뷮",
"ȸ�Ƿ�",
"�ǹ�",
"����,�ο�/����������,�ο��ϴ�",
"Ư��/Ư������ִ�/Ư�㸦���",
"������ġ",
"�Ͻ�",
"���ż���",
"ȯ��",
"��",
"����",
"�����",
"��������",
"������ִ�",
"���ͼ��ִ�",
"���Ǹ�����̴�",
"â������",
"�����",
"���",
"���õ�",
"��������",
"�����",
"�ʱ���",
"�����⽬��",
"�ټ���",
"������",
"��������",
"����",
"������",
"�Թ���",
"��������",
"������",
"����ġ����",
"������",
"�ŷ��Ҽ��ִ�",
"����������",
"ȿ������",
"���ǹٸ�",
"�̻�����",
"��������",
"����������",
"�ڵ���",
"�Ⲩ��~�ϴ�,��������",
"������ִ�",
"����/�������",
"�ν��ϰ��ִ�",
"��������",
"���ʾ���",
"�θ�����",
"����,�䱸������",
"�ּ���",
"�޾Ƶ��̴�",
"�����緮��",
"������/�����ϴ�",
"����ϴ�",
"�̿���",
"��¥��",
"�������",
"����������",
"å�����ִ�",
"������������",
"������"
*/
//////////day21-22
/*
"�߰���",
"��������,������",
"�������ִ�",
"�����",
"������/��������",
"�������,����",
"������",
"�ʼ�����",
"��������",
"������,�濵��",
"��ġ��",
"�ΰ���",
"��ȣ�ϴ�",
"������,������",
"��ū",
"���/�����̵�",
"�ѷ���",
"�ΰ���",
"�λ�����",
"Ź����",
"��������",
"���̴�",
"�پ,��������",
"������",
"������",
"�ְ���",
"�����ϴ�",
"�����Ҽ��ִ�",
"��������",
"����ϴ�",
"������",
"~�ҰͰ���",
"�ݺ��Ǵ�",
"��ȿ��",
"�����",
"������",
"�ӽ���",
"�پ���",
"ǳ����",
"���ͼ�������",
"�ڽ���",
"������",
"��ſ�",
"�����ϱ⽬��",
"������",
"�ʼ�����",
"��ȯ�Ҽ��ִ�",
"ȸ������",
"�����ϴ�",
"�뵵������",
"�߿���,��������",
"������������",
"������",
"�ָ��Ҹ���",
"�˰��ִ�",
"������",
"�ݺ�����",
"���Ҽ�����",
"������",
"ȿ������",
"���ɼ����ִ�",
"�����/������Ͼ��",
"������",
"�ݴ���",
"�����Ҽ��ִ�",
"�������",
"��������",
"����,�����",
"�Ҽ��ִ�",
"�ͼ���",
"������",
"��â�ϴ�",
"�ֽ���",
"������",
"�⻵�ϴ�",
"�����ϴ�",
"�����",
"�ǹ�����",
"�������ִ�",
"������",
"��������",
"������",
"�ڰ����ִ�",
"Ȯ�ſ���",
"�����",
"������",
"�������ִ�",
"���Ӱ�����",
"�����̾���",
"���õ�",
"ħü��",
"��ȸ����",
"��Ÿ����",
"������",
"��������",
"������",
"�Ͻ�����",
"��ü��",
"����/���ϱ⽬��",
"��������"
*/
//////////day23-24
/*
"�����",
"��ü/��ü��",
"�����",
"������",
"�پ",
"���λ���/Ư����",
"�ǰ�������",
"���׷��ִ�",
"������",
"������",
"�Ͻ�����",
"������",
"�ɷ��̵Ǵ�",
"�ڼ���",
"���Ҽ�����",
"��������",
"ũ��/�뷮��",
"��ġ/��ġ���ִ�",
"��������",
"���õ�",
"�ٶ�����",
"�ʿ���",
"���õ�",
"�ΰ��ϰԹ����ϴ�",
"�����",
"�����",
"����/������",
"���ɽ�����",
"���������",
"������",
"��￡����",
"�ñ�������",
"��ȣ�Ǵ�",
"������",
"Ȯ����",
"Ȯ����",
"��Ȯ����",
"������",
"�������",
"������",
"����ϴ�",
"�������Ͼ��",
"�׸�����",
"��������",
"������",
"������������",
"�͸���",
"����Ÿ���",
"���డ����",
"��������",
"������",
"��Ȯ�ϰ�",
"�ų�",
"�׿�����",
"������",
"���������",
"�ɼ��ϰ�",
"�ո�������",
"�и���",
"�и���",
"�����",
"������",
"�ֱ�������",
"����",
"�����ϰ�",
"�ַ�",
"������",
"����������",
"�����",
"���",
"�Ͻ�������",
"��ü������",
"�ް��ϰ�",
"�쿬��",
"����ġ��",
"�ֱٿ�",
"�����",
"�������ϰ�",
"�����Ͽ�",
"����������",
"����",
"�ᱹ",
"�ַ�",
"�ʱ���/����",
"����������",
"������",
"�����ϰ�",
"������",
"����������",
"��,�����ϰ�",
"�ǵ�ġ�ʰ�",
"�ܰ�������",
"����������",
"�ε巯����",
"������",
"������",
"�յ���",
"�ε巯����",
"���ʻ�",
"�е�������"

*/
//////////day25-26
/*
"��Ȯ��",
"����",
"����ϰ�",
"�뷫",
"����",
"�ܵ�����",
"���� ��",
"�ܴ���",
"������",
"�ʿ�������",
"����",
"�����ϰ�",
"�̷�������",
"�����ϰ�",
"��Ȯ�ϰ�",
"��ü ����",
"����",
"�ص���",
"�������̸�",
"����",
"���� ���",
"�ð��� ����",
"�ణ",
"����������",
"�κ�������",
"����",
"���ϰ�",
"�����ϰ�",
"���� ~ �ʴ�",
"�ڵ�����",
"��",
"�Ǽ���",
"�޼��ϰ�",
"�Ϲ�������",
"����������",
"Ư��",
"ȿ��������",
"�Ͻ�������",
"����",
"����",
"�ᱹ",
"����ܷ�",
"����������",
"��Ȯ�ϰ�",
"�Ĳ��ϰ�",
"����",
"�ϻ�������",
"���ÿ�",
"������ġ��",
"��ǻ�",
"~����",
"~�� ���Ͽ�",
"~ �̷���",
"~�� ���Ҿ�",
"~�� �ռ�",
"~ ����",
"~�� ���Ͽ�",
"~�� ����Ͽ�",
"~ ��ſ�",
"~�� �����ϰ�",
"~ ���п�",
"~�� �����Ͽ�",
"�Դٰ�,~ �ܿ�",
"~�� ��ȯ����",
"���̿�",
"~ ����",
"~ ������",
"~�� �����",
"~�� ���� ��������",
"~�� �������",
"~�� ��ǥ�Ͽ�",
"~�� ����",
"~�� ����",
"~�� ����������",
"~�� ���Ͽ�",
"~����",
"~ ������",
"~�� �Ѿ",
"~���� �ұ��ϰ�",
"B�Ӹ� �ƴ϶� A ��",
"~���ٴ� ����",
"~�� ��������",
"~�� ������",
"�������,~ �Ŀ�",
"~ ��ſ�",
"~�� ����",
"~�� ����",
"~�� ���Ͽ�",
"~ �̿ܿ�",
"~�� ���߾�",
"~�� �����Ͽ�",
"~�� ����",
"~�� �ؼ��Ͽ�",
"~�� ���Ǹ� ǥ�Ͽ�",
"~�� �����Ͽ�",
"~�� ����������"

*/

};


//1.�ܾ�˻�
char find_voca[30];

//6.�ܾ����
char input_voca[30];
char test_voca[103][30];
int score[103] = { 0,0,0,0,0,0,0,0,0,0 };
int o[103] = { 0,0,0,0,0,0,0,0,0,0 };//���� Ƚ�� ����
int x[103] = { 0,0,0,0,0,0,0,0,0,0 };//Ʋ�� Ƚ�� ����
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
};//������ �迭�̿��� ���� �޹��� �̹��� 

//7.��Ÿ
int stopwatch[5] = { 0,0,0,0,0 };//�ð� ���� �����

////////////////////////////////////////////////////////////////////////////////////////�Լ�����

///////////1.�ܾ�˻�
void voca_search();

////////////2.����
void eliminate();

////////////3.�߰�
void add();

////////////4.���
void print();

////////////5.ȭ�� �����
void clear();

////////////6.�ܾ����
void voca_game();
//�н�
void study();
void study_step1();
void study_step2();
void test();
void print_score();
void study_step3();
void review();
//����
void print_drawing();
void gaming();// �ܾ������ ������ �׸��� �ϼ����� �����ϴ� ����
void RAND_COLOR();//�������� �� ����
void game();

////////////7.��Ÿ

void x_sound();//�����϶� ��-! �Ҹ� ���
int sec_to_min_sec();//000�ʸ� 00��00�ʷ� ��ȯ

///////////////////////////////////////////////////////////////////////////////////////////�����Լ�
int main()
{
    while (1)
    {
        //���θ޴�
        ///////////////////////6��>2�� �����Ϸ��� RAND_COLOR();�ּ� Ǯ��� ��
       //RAND_COLOR();
        printf("\n================================================================================\n");
        printf("1.�ܾ�˻�  2.����  3.�߰�  4.���  5.ȭ�������  6.�ܾ����  7.�ܾ��  8.����  \n");
        printf("\n================================================================================\n");
        printf("���ϴ� ��ȣ�� �����ϼ���>>");
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
            printf("�߸� �����̽��ϴ�.\n");
            printf("�˸��� ��ȣ�� �Է��ϼ���.\n");
        }

    }
}

///////////////////////////////////////////////////////////////////////////////////////////�Լ�����

//1.�ܾ�˻�
void voca_search()
{
    printf("�ܾ�˻��� �����ϼ̽��ϴ�.\n");
    printf("������ �ñ��ϽŰ���? ([1]������ [2]�ѡ濵 ):");
    scanf_s("%d", &voca_search_menu);
    switch (voca_search_menu)
    {
    case 1:
    {

        printf("������ ����\n");
        printf("ã����� �ܾ��� ����ö�ڸ� �Է��ϼ���\n");
        scanf_s("%s", &find_voca, 30);//ã���� �ϴ� �ܾ �Է� �޴´�
        printf("%s�� �˻��մϴ�!\n", find_voca);

        for (int i = 0; i < voca_cnt; i++)//�������� 10���� �ܾ ��
        {

            for (int j = 0; j < 30; j++)//�� �ܾ �ѱ��� �ѱ��� ��
            {

                if (voca_eng[i][j] != find_voca[j]) //�ܾ� ö�ڰ� �ϳ��� �ٸ����
                    break;//233���� �������� �������� 230���� �������� ���� �� ���� �ܾ�� ��
                else if (voca_kor[i][j] == '\0' && find_voca[j] == '\0')//���鹮�ڰ� ���ö����� �ܾ� ö�ڰ� ��ΰ�����
                {
                    printf("�ܾ ã�ҽ��ϴ�!!\n");//�ܾ ã�Ҵٴ� �޽��� ���
                    printf("%s�� %s�Դϴ�!!", find_voca, voca_kor[i]);
                    check = 1;//�̸��� ã���� check�� 1�� �����Ͽ� ���� 247���� ������ 230�� ������ ���� ���´�
                    break;//233�� ���� �������´�
                }
            }

            if (check == 1)//ã�� ��� �ݺ��� �ٷ� Ż��
            {
                check = 0;//������ ���� 0���� �ٽ� �ٲ���´�.
                break;
            }
            if (i == voca_cnt - 1 && check == 0)    //������ ���Ҵµ� �� ã�� ���(10��°�̸����� �����鼭 ã�� ���Ͽ��� ������ check�� 0
                printf("���� �ܾ��Դϴ�.\n");
        }
        break;
    }


    case 2://case:1�� ���� ���
    {

        printf("�ѡ濵 ����\n");
        printf("ã���� �ϴ� �ܾ��� �ѱ� ���� �Է��ϼ���!\n");
        scanf_s("%s", &find_voca, 30);
        printf("%s�� �˻��մϴ�!\n", find_voca);
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

                        printf("�ܾ ã�ҽ��ϴ�!!\n");
                        printf("%s�� %s�Դϴ�!!", find_voca, voca_eng[i]);
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
                printf("���� �ܾ��Դϴ�.\n");
        }
        break;
    }

    }


}

//2.����
void eliminate()
{
    printf("�����ϰ���� �ܾ��� ��ȣ�� �Է��ϼ���.\n");
    scanf_s("%d", &index);
    if (index < voca_cnt)//�����ϰ� ���� �ܾ��� �ε����� �����ȿ� �ִٸ�
    {
        for (int i = index; i < voca_cnt; i++)// �����ϰ���� �ܾ��� ���� �ܾ���� ������ �ܾ���� 
        {
            for (int j = 0; j < 30; j++)//���پ� �մ�� �����.
            {
                voca_eng[i][j] = voca_eng[i + 1][j];
                voca_kor[i][j] = voca_kor[i + 1][j];
            }


        }
        voca_cnt--;//�ܾ� �ϳ� �����Ǿ����� �ܾ��--;
    }
    printf("�����Ϸ�\n");
}

//3.�߰�
void add()
{
    printf("�ܾ �߰��մϴ�.\n");
    printf("���� �ܾ �Է��ϼ���!:\n");
    scanf_s("%s", voca_eng[voca_cnt], 30);//�Ǹ������ε����� �߰�
    printf("�ѱ� ���� �Է��ϼ���!:\n");
    scanf_s("%s", &voca_kor[voca_cnt], 30);
    printf("�߰��Ǿ����ϴ�.\n");
    voca_cnt++;
}

//4.���
void print()
{
    printf("\n��ȣ        ����      �ѱ�\n");
    printf("============================================================\n");
    for (int i = 0; i < voca_cnt; i++)
    {
        printf("%3d.%-10s %-13s\n", i + 1, voca_eng[i], voca_kor[i]);
    }
}

//5.ȭ�������
void clear()
{
    system("cls");
}

//6.�ܾ����
void voca_game()
{
    printf("��ȣ�� �����ϼ���[1.�н� 2.����]\n");//�н�,���� �ΰ��� �� �ϳ� ����
    scanf_s("%d", &voca_game_menu);
    if (voca_game_menu == 1)
        study();
    else if (voca_game_menu == 2)
        game();
    else
    {
        printf("�߸��Է��ϼ̽��ϴ�. �ٽ� ��ȣ�� �����ϼ���\n");
        voca_game();
    }
}

//6-0.�ܾ����
print_voca_one(int a)
{
    printf("%3d.%-10s %-13s\n", a + 1, voca_eng[a], voca_kor[a]); //���ϴ� �ܾ� �ϳ��� ����ϴ� �Լ�
}

//6-1.�ܾ�ϱ�
void study()
{

    study_step1();//1�ܰ� �н�:�ܾ ���� �ѹ��� ���� �ẻ��.
    study_step2();//2�ܰ� �н�: �ܾ��� �ѱ۶��� ������ ������ �Ѿ�� Ʋ���� 3�� ���󾴴�.
    for (int i = 1; i < 4; i++)//2�ܰ��н��� 2-1,2-2,2-3 �̷��� �� 3���� �н��� �ִµ� �̸� �н��ϴ� �ð��� ����
    {
        step2_time = step2_time + stopwatch[i];

    }
    printf("\n[[2�ܰ� �н� �ð�:");//���
    sec_to_min_sec(step2_time);//�ʸ� 00��00�� �������� �ٲ��ִ� �Լ����
    printf("]]");
    Sleep(5000);

    study_step3();//3�ܰ� �н�: 2�ܰ��� �н����� 3�� ��� Ʋ�� �ܾ ��� �����Ѵ�.

    for (int i = 0; i < 5; i++)//�н� 1~3�ܰ��� �� �н��ð��� �����Ͽ� ���
    {
        total_time = total_time + stopwatch[i];
    }
    printf("\n[[�� �ܾ��н� �ð�:");
    sec_to_min_sec(total_time);
    printf("]]");
    Sleep(10000);

}
void study_step1()//1�ܰ��н�
{
    start = clock();//�н��ð� ��������
    printf("\n1�ܰ� �н��� �����մϴ�.\n");
    printf("�ܾ�� ģ������!\n");
    printf("�ܾ ���� �ѱ� ���� �Ȱ��� �Է��Ͽ� ģ������!\n");
    for (a = 0; a < voca_cnt; a++)//�ܾ �ϳ��� ����ϰ� �ѹ��� �Է¹޴´�.
    {
        print_voca_one(a);
        scanf_s("%s", &input_voca, 30);

    }
    end = clock();//�н��ð� ���� ��
    stopwatch[0] = (double)(end - start) / CLOCKS_PER_SEC;//���ð�-���۽ð� �Ͽ� ����ð��� ����
    round(stopwatch[0]);//�ݿø�
    (int)stopwatch[0];//�Ҽ��� ����
    printf("\n[[1�ܰ� �н� �ð�:");
    sec_to_min_sec(stopwatch[0]);
    printf("]]");

    Sleep(5000);//�����ܰ��н����� ������ ��� ����



}

void study_step2()//2�ܰ��н�
{
    system("cls");//ȭ�� ����
    printf("2�ܰ� �н��� �����մϴ�.\n");
    printf("�ܾ �ϱ�����!\n");
    printf("3�� �ݺ� �н��Ͽ� �ܾ �ϱ�����!\n");

    Sleep(5000);
    system("cls");

    test();//�ܾ ���� ������ �����ܾ�� �Ѿ�� Ʋ���� 3�� �����ϴ� �Լ�(�̰� 3���ݺ�)
    print_score();//���� ���
}
void test()
{
    int test[3] = { 0,0,0 };
    for (int i = 0; i < 3; i++)
    {
        // int test[3] = {0.0,0};
        start = clock();//�н��ð� ��������
        system("cls");
        printf("%d��° �н�\n", i + 1);
        int p = 0;

        for (int pp = 0; pp < voca_cnt; pp++)
        {
            // printf("\n�ܾ ���� �˸��� ���� ������\n");
            printf("  �ܾ�\t\t\tƲ��Ƚ��\n");
            printf("%3d.%-13s\t%-13d \n", pp + 1, voca_eng[pp], x[pp]);//�ѱ۶��� �������ʰ� ����ܾ ���
            scanf_s("%s", &test_voca[p], 30);//�ѱ۶� �Է¹޴´�
            //printf("\n %s�� �Է��ߴ� �� �Է糪?\n", test_voca[t]);//�Է��Ѵ�� ��µǴ��� Ȯ��

            while (p >= 0 && p < voca_cnt)////�ܾ� �˻��Ҷ��� ������ ������� �´� �ܾ���� �������� �˻�
            {
                int check = 0;
                for (int q = 0; q < 30; q++)
                {
                    if (voca_kor[p][q] != test_voca[p][q]) //������ ���
                    {
                        x_sound();//�Լ��̿��Ͽ� ��- �Ҹ�����
                        printf("����!\t�˸°� 3�� �Է��ϼ���\n");
                        x[pp]++;//Ʋ��Ƚ�� ����
                        test[i]++;
                        print_voca_one(p);
                        //     printf("������ִ°�:%s�Է��Ѱ�:%s\n", &voca_kor[t], &test_voca[t]);//������ǰ� ��µǴ��� Ȯ��
                        scanf_s("%s %s %s", &input_voca, 30, &input_voca, 30, &input_voca, 30);//Ʋ���ܾ� 3�� �Է��Ͽ� ����

                        check = 1;
                        break;

                    }
                    else
                    {
                        if (voca_kor[p][q] == '\0' && test_voca[p][q] == '\0') //����
                        {

                            printf("����!\n");
                            Sleep(100);

                            o[pp]++;//����Ƚ�� ����
                            score[pp]++;//���� ����
                            //  printf("%s�� %s�Դϴ�!!\n", test_voca, voca_kor[t]);//�����
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

        end = clock();//�н��ð� ���� ��
        stopwatch[i + 1] = (double)(end - start) / CLOCKS_PER_SEC;
        round(stopwatch[i + 1]);//�ݿø�
        (int)stopwatch[i + 1];//�Ҽ��� ����

        printf("\n[[");
        sec_to_min_sec(stopwatch[i + 1]);
        printf("]]");
        for (int z = 0; z < 3; z++)
        {
            printf("\n[[%d��° �н� Ʋ�� ����:%d]]\n", z + 1, test[z]);
        }
        //printf("\n[[Ʋ�� ����:%d]]", test[z]);

        // printf("%d ��", stopwatch[i + 1]);
        Sleep(5000);

    }
}
void print_score()
{
    printf("\n[[����]]\n");
    printf("\n�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    printf("��ȣ          ����   �ѱ�   ����Ƚ��   Ʋ��Ƚ��   ����");
    for (int i = 0; i < voca_cnt; i++)
    {
        printf("\n%-10d %-10s %-13s %-10d %-10d %-10d\n", i, voca_eng[i], voca_kor[i], o[i], x[i], score[i]);
    }

}

void study_step3()
{
    start = clock();

    printf("\n3�ܰ� �н��� �����մϴ�!\n");
    printf("�ܾ ��������!\n");
    printf("���� �ܰ��н����� 3�� ��� Ʋ�� �ܾ ��� �����մϴ�.\n");
    for (int i = 0; i < voca_cnt; i++)
    {
        if (score[i] == 0)
        {
            print_voca_one(i);
            printf("�ܾ ���� ������.\n");
            scanf_s("%s", &input_voca, 30);

        }
    }
    end = clock();
    stopwatch[4] = (double)(end - start) / CLOCKS_PER_SEC;
    round(stopwatch[4]);//�ݿø�
    (int)stopwatch[4];//�Ҽ��� ����
    printf("\n[[3�ܰ� �н� �ð�:");
    sec_to_min_sec(stopwatch[4]);
    printf("]]");
    Sleep(1000);


}

//6-2.�ܾ����//�ܾ������ ������ �׸��� �ϼ����� �����ϴ� ����
void game()
{
    system("cls");
    printf("[[���Ӽ���]]\n");//���� ����
    printf("�ܾ���� �� 10�� �����˴ϴ�.\n");
    printf("������ ���߸� 10���� ������ ������ �ϳ��� �����\n ");
    printf("������ �ִ��� ���� ȹ���Ͽ� �׸��� �ϼ��ϼ���!\n");
    printf("(������ ���� ������ �ʿ��� ĭ���� ��������� ��Ÿ���ϴ�)");
    Sleep(3000);
    system("cls");


    printf("���� �׸��ϱ�??\n");
    print_drawing();
    Sleep(1000);
    system("cls");
    gaming();
}

void print_drawing()//�̸� ������ bird ������ �迭�� 0~9������ ���ڿ� ������ ���� �����Ǿ� �ִ�.
{
    for (int i = 0; i < 17; i++)// ������� (i,j)��0���̸鼭 ����������9���̻��̸� 0���� ��� �ϴû��� ĥ�Ѵ�.
    {
        for (int j = 0; j < 11; j++)//���������� �׸��ϼ����� ����ϰԲ� ������ ������ �����Ͽ���.
        {

            if (bird[i][j] == 0 && color > 9)//0���� �ϴû��� �����̱� ������ ���� ���� �κ��� �����ϱ� ������ 10������ �ٸ¾ƾ� ��� ��µǰ���
            {
                SKY_BLUE
                    printf("��");
            }
            else if (bird[i][j] == 0 && color > 2 && j % 2 == 1)//�ϴû� Ȧ����° �����ٸ� ���
            {
                SKY_BLUE
                    printf("��");
            }
            else if (bird[i][j] == 1 && color > 7)
            {
                RED
                    printf("��");
            }
            else if (bird[i][j] == 2 && color > 6)
            {
                YELLOW
                    printf("��");
            }
            else if (bird[i][j] == 3 && color > 5)
            {
                BLUE
                    printf("��");
            }
            else if (bird[i][j] == 0 && color > 4 && i % 2 == 1)//�ϴû� Ȧ����° �����ٸ� ���
            {
                SKY_BLUE
                    printf("��");
            }
            else if (bird[i][j] == 5 && color > 3)
            {
                HIGH_GREEN
                    printf("��");
            }
            else if (bird[i][j] == 6 && color > 2)
            {
                PURPLE
                    printf("��");
            }
            else if (bird[i][j] == 7 || bird[i][j] == 4 && color > 1)
            {
                GOLD
                    printf("��");
            }
            else if (bird[i][j] == 8 && color > 8)
            {
                BLACK
                    printf("��");
            }
            else if (bird[i][j] == 9 && color > 0)
            {
                WHITE
                    printf("��");
            }
            else
            {
                RAND_COLOR();
                printf("��");
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
            printf("\n�ܾ ���� �˸��� ���� ������\n");
        printf("  �ܾ�\n");
        printf("%3d.%-13s\t \n", pp, voca_eng[pp]);
        scanf_s("%s", &test_voca[p], 30);
        //printf("\n %s�� �Է��ߴ� �� �Է糪?\n", test_voca[t]);//�����

        while (p >= 0 && p < voca_cnt)
        {

            int check = 0;
            for (int j = 0; j < 30; j++)
            {
                if (voca_kor[p][j] != test_voca[p][j])
                {
                    x_sound();
                    printf("����!\n");
                    printf("���� ȹ�� ����!\n");
                    printf("[[���� 10���� ���� �� %d���� �̿���!!]]\n", color);
                    printf("����");//���� ���
                    print_voca_one(p);
                    //     printf("������ִ°�:%s�Է��Ѱ�:%s\n", &voca_kor[t], &test_voca[t]);//�׽�Ʈ��


                    check = 1;

                    break;

                }
                else
                {
                    if (voca_kor[p][j] == '\0' && test_voca[p][j] == '\0')
                    {
                        color++;//������ ����
                        printf("����!\n");
                        printf("���� ȹ��!\n");

                        printf("[[���� 10���� ���� �� %d���� �̿���!!]]\n", color);
                        Sleep(1000);


                        //  printf("%s�� %s�Դϴ�!!\n", test_voca, voca_kor[t]);//�׽�Ʈ��
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

        print_drawing();//�߰� �׸� ���
    }



}
void RAND_COLOR() //�� �������� ���

{

    int num;

    num = rand() % 14; //0~13����



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


//7.��Ÿ


void x_sound()//��-! �Ҹ� ���
{
    Beep(MI, 800);
}

int sec_to_min_sec(int ms)
{
    min = ms / 60;
    sec = ms % 60;

    return printf("%d��%d��", min, sec);
}//000�ʸ� 00��00�ʷ� ��ȯ

void review()
{
    /*
    (������ �ܰ踦 �δܰ踸 �ߴ�. �Ϻ��ϰ� �ܿ�� ������ �ݺ� ��ų �� ������ ��� �����Ǿ� ���� �������� �ϴ��� �δܰ踸!)

    ����
    1�ܰ�: 2-1 �н��� �ѹ��� �Ѵ�.
    2�ܰ�: 1�ܰ� �н��� �� �� Ʋ�� �ܾ� 3�� �ٽ� ����.


    Ʋ�� �ܾ�� ���
    �ܾ� �׸��� ó������ ���� �ϱ�б���.
    �ð������� 1�ܰ�~2�ܰ�
    */

    //����
    printf("\n\n���� ����\n");
    printf("ó������ ���� �ϱ��� �� ���� �����ϱ�.\n");
    Sleep(2000);

    start = clock();//�н��ð� ��������
    system("cls");
    int i = 0;
    p = 0;
    //1�ܰ�
    for (int pp = 0; pp < voca_cnt; pp++)
    {
        printf("\n\n�ܾ ���� �˸��� ���� ������\n");
        // printf("  �ܾ�\t\tƲ��Ƚ��\n");
        printf("%3d.%-13s\t%-13d \n", pp + 1, voca_eng[pp], x[pp]);//�ѱ۶��� �������ʰ� ����ܾ ���
        scanf_s("%s", &test_voca[p], 30);//�ѱ۶� �Է¹޴´�
        //printf("\n %s�� �Է��ߴ� �� �Է糪?\n", test_voca[t]);//�Է��Ѵ�� ��µǴ��� Ȯ��

        while (p >= 0 && p < voca_cnt)////�ܾ� �˻��Ҷ��� ������ ������� �´� �ܾ���� �������� �˻�
        {
            int check = 0;
            for (int q = 0; q < 30; q++)
            {
                if (voca_kor[p][q] != test_voca[p][q]) //������ ���
                {
                    x_sound();//�Լ��̿��Ͽ� ��- �Ҹ�����
                    printf("����!\t�˸°� 3�� �Է��ϼ���\n");
                    x[pp]++;//Ʋ��Ƚ�� ����
                    print_voca_one(p);
                    //     printf("������ִ°�:%s�Է��Ѱ�:%s\n", &voca_kor[t], &test_voca[t]);//������ǰ� ��µǴ��� Ȯ��
                    scanf_s("%s %s %s", &input_voca, 30, &input_voca, 30, &input_voca, 30);//Ʋ���ܾ� 3�� �Է��Ͽ� ����

                    check = 1;
                    break;

                }
                else
                {
                    if (voca_kor[p][q] == '\0' && test_voca[p][q] == '\0') //����
                    {

                        printf("����!\n");
                        Sleep(100);

                        o[pp]++;//����Ƚ�� ����
                        score[pp]++;//���� ����
                        //  printf("%s�� %s�Դϴ�!!\n", test_voca, voca_kor[t]);//�����
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

    end = clock();//�н��ð� ���� ��
    stopwatch[i + 1] = (double)(end - start) / CLOCKS_PER_SEC;
    round(stopwatch[i + 1]);//�ݿø�
    (int)stopwatch[i + 1];//�Ҽ��� ����
    printf("%d ��", stopwatch[i + 1]);
    Sleep(5000);

    //Ʋ�� �ܾ� ���
    printf("\nƲ�� �ܾ� ���\n");
    for (int i = 0; i < voca_cnt; i++)
    {
        if (score[i] == 0)
        {
            print_voca_one(i);

        }
    }
    Sleep(5000);

    //2�ܰ�
    start = clock();

    //printf("\n3�ܰ� �н��� �����մϴ�!\n");
    //printf("�ܾ ��������!\n");
    //printf("���� �ܰ��н����� 3�� ��� Ʋ�� �ܾ ��� �����մϴ�.\n");
    printf("\n\n���� �ܾ��� Ʋ�� �ܾ� 3�� ����\n");

    for (int i = 0; i < voca_cnt; i++)
    {
        if (score[i] == 0)
        {
            print_voca_one(i);
            printf("3�� ����� �ѱ� ���� �Ҹ����� ��������.\n");
            scanf_s("%s %s %s", &input_voca, 30, &input_voca, 30, &input_voca, 30);

        }
    }
    end = clock();
    stopwatch[4] = (double)(end - start) / CLOCKS_PER_SEC;
    round(stopwatch[4]);//�ݿø�
    (int)stopwatch[4];//�Ҽ��� ����
    printf("%d ��", stopwatch[4]);
    Sleep(1000);


    //�� �����ð� ���
    for (int i = 0; i < 5; i++)//�н� 1~3�ܰ��� �� �н��ð��� �����Ͽ� ���
    {
        total_time = total_time + stopwatch[i];
    }
    printf("\n\n[[�� �ܾ��н� �ð�:");
    sec_to_min_sec(total_time);
    printf("]]");
    Sleep(10000);

}