#ifndef F64_TO_F32_LUT_H
#define F64_TO_F32_LUT_H

#include <stdint.h>

/* Generated 2025-02-28T19:10:48Z */

typedef uint64_t input_type;

typedef uint32_t output_type;

const input_type f64_to_f32_LUT_input[480] = {
/*    0 */ UINT64_C(0x0000000000000000),
/*    1 */ UINT64_C(0x0000000000000001),
/*    2 */ UINT64_C(0x0010000000000000),
/*    3 */ UINT64_C(0x3FE0000000000000),
/*    4 */ UINT64_C(0x3FF0000000000000),
/*    5 */ UINT64_C(0x4000000000000000),
/*    6 */ UINT64_C(0x7FEFFFFFFFFFFFFF),
/*    7 */ UINT64_C(0x7FF0000000000000),
/*    8 */ UINT64_C(0x7FF8000000000000),
/*    9 */ UINT64_C(0x7FF4000000000000),
/*   10 */ UINT64_C(0x3FE0000000000001),
/*   11 */ UINT64_C(0x3FF0000000000001),
/*   12 */ UINT64_C(0x4000000000000001),
/*   13 */ UINT64_C(0x3FDFFFFFFFFFFFFF),
/*   14 */ UINT64_C(0x3FEFFFFFFFFFFFFF),
/*   15 */ UINT64_C(0x3FFFFFFFFFFFFFFF),
/*   16 */ UINT64_C(0x0000000000000002),
/*   17 */ UINT64_C(0x0010000000000001),
/*   18 */ UINT64_C(0x000FFFFFFFFFFFFF),
/*   19 */ UINT64_C(0x7FEFFFFFFFFFFFFE),
/*   20 */ UINT64_C(0x8000000000000000),
/*   21 */ UINT64_C(0x8000000000000001),
/*   22 */ UINT64_C(0x8010000000000000),
/*   23 */ UINT64_C(0xBFE0000000000000),
/*   24 */ UINT64_C(0xBFF0000000000000),
/*   25 */ UINT64_C(0xC000000000000000),
/*   26 */ UINT64_C(0xFFEFFFFFFFFFFFFF),
/*   27 */ UINT64_C(0xFFF0000000000000),
/*   28 */ UINT64_C(0xFFF8000000000000),
/*   29 */ UINT64_C(0xFFF4000000000000),
/*   30 */ UINT64_C(0xBFE0000000000001),
/*   31 */ UINT64_C(0xBFF0000000000001),
/*   32 */ UINT64_C(0xC000000000000001),
/*   33 */ UINT64_C(0xBFDFFFFFFFFFFFFF),
/*   34 */ UINT64_C(0xBFEFFFFFFFFFFFFF),
/*   35 */ UINT64_C(0xBFFFFFFFFFFFFFFF),
/*   36 */ UINT64_C(0x8000000000000002),
/*   37 */ UINT64_C(0x8010000000000001),
/*   38 */ UINT64_C(0x800FFFFFFFFFFFFF),
/*   39 */ UINT64_C(0xFFEFFFFFFFFFFFFE),
/*   40 */ UINT64_C(0x65573A1F5CE24997),
/*   41 */ UINT64_C(0x46BC1E0C5AECAE91),
/*   42 */ UINT64_C(0xEBE9E6A10E27275A),
/*   43 */ UINT64_C(0x061DF86ACC5ADAD7),
/*   44 */ UINT64_C(0xFFDACB52D5BCB9F1),
/*   45 */ UINT64_C(0x49DAEF59456BA8B1),
/*   46 */ UINT64_C(0x870297DB07F81DB8),
/*   47 */ UINT64_C(0x6089CB8E59980D44),
/*   48 */ UINT64_C(0x21279CB40BE0441D),
/*   49 */ UINT64_C(0xA92D024DF0E9C656),
/*   50 */ UINT64_C(0xCD4F269521C1D987),
/*   51 */ UINT64_C(0xF0E132075B7561A1),
/*   52 */ UINT64_C(0xBA3BF38C46B64FC7),
/*   53 */ UINT64_C(0x149193948076C22A),
/*   54 */ UINT64_C(0x5710A4B2D26DECF9),
/*   55 */ UINT64_C(0xCCADF7948FCAC899),
/*   56 */ UINT64_C(0x3BE2D23C6A558BD8),
/*   57 */ UINT64_C(0xE5641A17C33C891F),
/*   58 */ UINT64_C(0x065EE907EB7AA4DC),
/*   59 */ UINT64_C(0x72C8E3E5F9F96336),
/*   60 */ UINT64_C(0xE83D90B9F04EE2C7),
/*   61 */ UINT64_C(0x87D8ED1DF184D0AA),
/*   62 */ UINT64_C(0x52291DA603CBC20E),
/*   63 */ UINT64_C(0x865515413E2A8BE6),
/*   64 */ UINT64_C(0xBCBCFA0456BAAB00),
/*   65 */ UINT64_C(0x1D4C050C361AC074),
/*   66 */ UINT64_C(0x915089C21A164D2E),
/*   67 */ UINT64_C(0x56B3BC4EC0FBAC5F),
/*   68 */ UINT64_C(0x1AB055F7B90C2F27),
/*   69 */ UINT64_C(0x228270AFA7007584),
/*   70 */ UINT64_C(0xF3F87305F50253E5),
/*   71 */ UINT64_C(0x370F5031F7BBF01E),
/*   72 */ UINT64_C(0xA9AAE467E824F128),
/*   73 */ UINT64_C(0x21921712BD5B1027),
/*   74 */ UINT64_C(0x8668F5A1DDA5C1DA),
/*   75 */ UINT64_C(0xE0C0596C057959EE),
/*   76 */ UINT64_C(0x27B2A1970B4EBB5A),
/*   77 */ UINT64_C(0x719CF399CB0C099A),
/*   78 */ UINT64_C(0xD9CB28E26149B63A),
/*   79 */ UINT64_C(0xF27DD1CF83F24503),
/*   80 */ UINT64_C(0xA51C95E1067C4C8C),
/*   81 */ UINT64_C(0xA2C1D3FA71F0EA26),
/*   82 */ UINT64_C(0x1FE10D3D3C68B68D),
/*   83 */ UINT64_C(0x36625CDA96DF0C7F),
/*   84 */ UINT64_C(0x688A527406DB34B1),
/*   85 */ UINT64_C(0x0C9C4EEBF3092710),
/*   86 */ UINT64_C(0xEBBBEE10A096E881),
/*   87 */ UINT64_C(0x9C20EF049365E0AF),
/*   88 */ UINT64_C(0x80A4BCC42D212758),
/*   89 */ UINT64_C(0xEB22E4879D056F02),
/*   90 */ UINT64_C(0xC6D02DEC3CA4A74C),
/*   91 */ UINT64_C(0x998C3BB1FAD148FE),
/*   92 */ UINT64_C(0x6C4938309C102170),
/*   93 */ UINT64_C(0xB2F5854D9A0C72D1),
/*   94 */ UINT64_C(0xA86C0C52DBAA72FF),
/*   95 */ UINT64_C(0xADCEE928CC0C05AC),
/*   96 */ UINT64_C(0x73C3A78EB37DA6B0),
/*   97 */ UINT64_C(0x4ACB1B35AB6146F7),
/*   98 */ UINT64_C(0xE1E1C140FE78998D),
/*   99 */ UINT64_C(0x7C04D3B189D6C3F4),
/*  100 */ UINT64_C(0xE11ADA5DF2D99540),
/*  101 */ UINT64_C(0x65A8311AE5653C03),
/*  102 */ UINT64_C(0x8EAD76436ECF48BA),
/*  103 */ UINT64_C(0xF150175BACEA730B),
/*  104 */ UINT64_C(0x3B303E1CCF4ABC94),
/*  105 */ UINT64_C(0xE8390755B3AEDF6D),
/*  106 */ UINT64_C(0x9216D523ED2088E3),
/*  107 */ UINT64_C(0x2CBEF9DC67081EA5),
/*  108 */ UINT64_C(0x2CF004AC59228666),
/*  109 */ UINT64_C(0xE12B7073DD7A278F),
/*  110 */ UINT64_C(0xBB77C4FB3E410622),
/*  111 */ UINT64_C(0xFBD846AEBC30D735),
/*  112 */ UINT64_C(0xE813CBDC1B5CEA0E),
/*  113 */ UINT64_C(0x65FF484EFE2A433B),
/*  114 */ UINT64_C(0x418802BAE2D14183),
/*  115 */ UINT64_C(0x16C0F52FA25BCD62),
/*  116 */ UINT64_C(0xCCB3DE98EF815B76),
/*  117 */ UINT64_C(0x5A2000DB3E119A24),
/*  118 */ UINT64_C(0xDA3B63D91FE7FEFA),
/*  119 */ UINT64_C(0x5532C9D4AB7402FF),
/*  120 */ UINT64_C(0x086B79BF965ABC83),
/*  121 */ UINT64_C(0xBDD96994AC793A7A),
/*  122 */ UINT64_C(0xDF32CF82AFF3F8F8),
/*  123 */ UINT64_C(0x72D178E58EADDE1C),
/*  124 */ UINT64_C(0x55BF7308E3BADC3C),
/*  125 */ UINT64_C(0xD855665C0FE3B8B0),
/*  126 */ UINT64_C(0xEF62EC55D12A781C),
/*  127 */ UINT64_C(0xAAEDD8498872CD13),
/*  128 */ UINT64_C(0x07F2E7E6B93C2C3B),
/*  129 */ UINT64_C(0x9865A4B66635295E),
/*  130 */ UINT64_C(0x0DA57AE3E789D19E),
/*  131 */ UINT64_C(0x9481C245B28505DF),
/*  132 */ UINT64_C(0x06DD1193105D1F41),
/*  133 */ UINT64_C(0x9F66D0C83C69631F),
/*  134 */ UINT64_C(0x350997769084AFBB),
/*  135 */ UINT64_C(0xD84D008E653134A1),
/*  136 */ UINT64_C(0x98528C621642FE99),
/*  137 */ UINT64_C(0x187F9CAF9DC686F0),
/*  138 */ UINT64_C(0x5C7C60D4B07EC7F5),
/*  139 */ UINT64_C(0x5FDC89A04148D3CC),
/*  140 */ UINT64_C(0x46B8F8A461264EA8),
/*  141 */ UINT64_C(0x814DCB51283ADB5E),
/*  142 */ UINT64_C(0xAB25877224157D36),
/*  143 */ UINT64_C(0x90720AB7A65DEF8D),
/*  144 */ UINT64_C(0x9C07DD92426308EB),
/*  145 */ UINT64_C(0xC2103D674C903B75),
/*  146 */ UINT64_C(0xA56436F24C9DDA7F),
/*  147 */ UINT64_C(0xABE7C09390A8878B),
/*  148 */ UINT64_C(0xB79945BA824AE810),
/*  149 */ UINT64_C(0xAA79B87E74D70928),
/*  150 */ UINT64_C(0x2702035DA931394E),
/*  151 */ UINT64_C(0xE6AD5D0E745A680E),
/*  152 */ UINT64_C(0x17B449EFD0AE6D32),
/*  153 */ UINT64_C(0x0FD05EB4A0144208),
/*  154 */ UINT64_C(0x3D768E406A159674),
/*  155 */ UINT64_C(0x7ADD9720C56D1FCE),
/*  156 */ UINT64_C(0x468F4F659A6835D9),
/*  157 */ UINT64_C(0x51DA211373007D5B),
/*  158 */ UINT64_C(0x2A0CD6E52539643B),
/*  159 */ UINT64_C(0x3604BA95783F60FD),
/*  160 */ UINT64_C(0x84F7CFD170D27E7D),
/*  161 */ UINT64_C(0x60440805A0FE4020),
/*  162 */ UINT64_C(0x5C0CC37FA1C08746),
/*  163 */ UINT64_C(0xC95EEB7EE78D8931),
/*  164 */ UINT64_C(0xCCD1BB99C5661124),
/*  165 */ UINT64_C(0xD4614CCB7C981988),
/*  166 */ UINT64_C(0xAAD8E6F75C5047E2),
/*  167 */ UINT64_C(0x3304DDC2CBF60CFE),
/*  168 */ UINT64_C(0x7F9D54921C1EDF11),
/*  169 */ UINT64_C(0xE5AAE57030CA3D2F),
/*  170 */ UINT64_C(0x207268F6257E483E),
/*  171 */ UINT64_C(0x9464F361C8DDF1E1),
/*  172 */ UINT64_C(0xF9868196061DBE00),
/*  173 */ UINT64_C(0x7D57F31CD3DA858C),
/*  174 */ UINT64_C(0x67A0C63D0462BAED),
/*  175 */ UINT64_C(0xA838A219C06FCDCD),
/*  176 */ UINT64_C(0x177C1DF2095AFE44),
/*  177 */ UINT64_C(0x61391448A6A86419),
/*  178 */ UINT64_C(0x99BCCD2EC3B4F3E7),
/*  179 */ UINT64_C(0xEA5F4AF7FE945EDD),
/*  180 */ UINT64_C(0xE815633B3DCB8528),
/*  181 */ UINT64_C(0xC19DF5DA8D98C0CC),
/*  182 */ UINT64_C(0x2B4F582F05D9B522),
/*  183 */ UINT64_C(0x77929606EEA4B2E0),
/*  184 */ UINT64_C(0x14266B3472BF971D),
/*  185 */ UINT64_C(0xB105181EDF0319EF),
/*  186 */ UINT64_C(0x1469F0B77FEC81F5),
/*  187 */ UINT64_C(0xA46BF502D0E10CE5),
/*  188 */ UINT64_C(0x6DBF1DE9AA51684F),
/*  189 */ UINT64_C(0xB30AF0151A8D173E),
/*  190 */ UINT64_C(0xA3C3357ED450C66C),
/*  191 */ UINT64_C(0x20F1ED91F4BD8342),
/*  192 */ UINT64_C(0xE5894EECECC420EB),
/*  193 */ UINT64_C(0xFDBA8BE7E0444470),
/*  194 */ UINT64_C(0xD1FA359186F84590),
/*  195 */ UINT64_C(0xE5F9415C56254336),
/*  196 */ UINT64_C(0x37B1AD0AE643963A),
/*  197 */ UINT64_C(0xE8A0C76CABB3CB92),
/*  198 */ UINT64_C(0xE6ADA0506074C3DE),
/*  199 */ UINT64_C(0xCE2D18D868626B12),
/*  200 */ UINT64_C(0xE74889BABC23BF79),
/*  201 */ UINT64_C(0x8B6E9C5D17001316),
/*  202 */ UINT64_C(0xCA73E387A2058AF9),
/*  203 */ UINT64_C(0x68A64F7A22175769),
/*  204 */ UINT64_C(0x09F469F9A65830D1),
/*  205 */ UINT64_C(0xF6148D64C54B5802),
/*  206 */ UINT64_C(0xAB27BE5BBA683532),
/*  207 */ UINT64_C(0x4AB1D78BE2A075B0),
/*  208 */ UINT64_C(0x780C3BF911D76ED5),
/*  209 */ UINT64_C(0xF3E586D7AEC23050),
/*  210 */ UINT64_C(0x7A51498C6F9A7464),
/*  211 */ UINT64_C(0x64C46E02745DD952),
/*  212 */ UINT64_C(0xDD5E08241B91EBA0),
/*  213 */ UINT64_C(0xD99B55449AC83EF0),
/*  214 */ UINT64_C(0xC991E59EEA5CAF53),
/*  215 */ UINT64_C(0x9F1A05DD24E5C83D),
/*  216 */ UINT64_C(0xDB680B3743A6E2EC),
/*  217 */ UINT64_C(0xCADDCF7017419871),
/*  218 */ UINT64_C(0xB7555F50828D9DC9),
/*  219 */ UINT64_C(0x20356E149C37EB0E),
/*  220 */ UINT64_C(0xDF384E27124AF376),
/*  221 */ UINT64_C(0x1D71435BFCB6BF1E),
/*  222 */ UINT64_C(0x14FA102350D40FA3),
/*  223 */ UINT64_C(0xB8AA73473D7D3CE5),
/*  224 */ UINT64_C(0x992C7ED38F67D22E),
/*  225 */ UINT64_C(0x95AF669E7E7E9521),
/*  226 */ UINT64_C(0xCBDDBB7873D9567E),
/*  227 */ UINT64_C(0xFF4117133D4D1B8C),
/*  228 */ UINT64_C(0xF3197B51300EBE31),
/*  229 */ UINT64_C(0xEE8815BF5D271453),
/*  230 */ UINT64_C(0x10E932AEB969FD07),
/*  231 */ UINT64_C(0xFA392695EC6FC93C),
/*  232 */ UINT64_C(0x7FC40DD84C45EB2D),
/*  233 */ UINT64_C(0xDF2F34A5E3ABF440),
/*  234 */ UINT64_C(0xBC9F22A06108B553),
/*  235 */ UINT64_C(0xC237E9CE3980247F),
/*  236 */ UINT64_C(0x9D999847918343D9),
/*  237 */ UINT64_C(0x6D6077930BCD3CC1),
/*  238 */ UINT64_C(0x81F1583820C2EFDC),
/*  239 */ UINT64_C(0x0D4484D0D8C7A734),
/*  240 */ UINT64_C(0xF43FDF65B0F6695B),
/*  241 */ UINT64_C(0x412469A5743E0714),
/*  242 */ UINT64_C(0xE283F8F012DCF0CE),
/*  243 */ UINT64_C(0x15511179C715EBE9),
/*  244 */ UINT64_C(0x6BD80CE04B447F4B),
/*  245 */ UINT64_C(0x5D0A02DBDCDA33D6),
/*  246 */ UINT64_C(0x291A269C0DB60BCB),
/*  247 */ UINT64_C(0x6E5ED60FEED68D42),
/*  248 */ UINT64_C(0x66F4F6DE80A8B93C),
/*  249 */ UINT64_C(0xA3B4C8D6ABC2E254),
/*  250 */ UINT64_C(0x03974E33244FE4BF),
/*  251 */ UINT64_C(0x8151137769BC9AB6),
/*  252 */ UINT64_C(0xF3F4907476BCF1B0),
/*  253 */ UINT64_C(0x292D283A5E4284DE),
/*  254 */ UINT64_C(0x1D4ACF721E4B78F2),
/*  255 */ UINT64_C(0x48B05F043767387D),
/*  256 */ UINT64_C(0xB6127206ED97CDEA),
/*  257 */ UINT64_C(0x90EBF1113DDC5FE6),
/*  258 */ UINT64_C(0x9DFF74DCE5666381),
/*  259 */ UINT64_C(0x279B6C8B960B381C),
/*  260 */ UINT64_C(0x28E9C6B3BAACC4F0),
/*  261 */ UINT64_C(0x4386259467629868),
/*  262 */ UINT64_C(0x9C1AE7FEB2711086),
/*  263 */ UINT64_C(0x5BDDD88E792CC597),
/*  264 */ UINT64_C(0xEF1733BD8F392310),
/*  265 */ UINT64_C(0x8715FEFCFE2615BF),
/*  266 */ UINT64_C(0xFD357ED2DD7660FF),
/*  267 */ UINT64_C(0xB3BB922BAF2A0F52),
/*  268 */ UINT64_C(0xC899E7E79A566DAD),
/*  269 */ UINT64_C(0xC2A01F6D72B95FA5),
/*  270 */ UINT64_C(0x271811156DD25765),
/*  271 */ UINT64_C(0x1F53CB236E29EF12),
/*  272 */ UINT64_C(0xD49EBDF8521D33CC),
/*  273 */ UINT64_C(0xA64EE16C5FD6FB21),
/*  274 */ UINT64_C(0x8FD55C5F1F4CB009),
/*  275 */ UINT64_C(0x32113D78971CFCCA),
/*  276 */ UINT64_C(0x8B85B6FBD449A451),
/*  277 */ UINT64_C(0xF291A6D4ADC94477),
/*  278 */ UINT64_C(0x4AECB02D20AF29A9),
/*  279 */ UINT64_C(0xF2384EB0F7D99779),
/*  280 */ UINT64_C(0xBF1B1D0EF66E424B),
/*  281 */ UINT64_C(0x9E2FDD7AFF62CB15),
/*  282 */ UINT64_C(0xB04E0723E79C81DA),
/*  283 */ UINT64_C(0xF53D91029B0DA764),
/*  284 */ UINT64_C(0x89975C31BE03AB83),
/*  285 */ UINT64_C(0x87234FC960176DC5),
/*  286 */ UINT64_C(0xDE903B1E2F38C923),
/*  287 */ UINT64_C(0xC51FB97C62DF0D4A),
/*  288 */ UINT64_C(0xD9AFF88E10A2825E),
/*  289 */ UINT64_C(0xD12ECEDE8F3DB29C),
/*  290 */ UINT64_C(0xF28E5CE5888AF4DA),
/*  291 */ UINT64_C(0xDA4428E6BEA2D0B2),
/*  292 */ UINT64_C(0x873156939C976BBB),
/*  293 */ UINT64_C(0x306B378ED0A446AB),
/*  294 */ UINT64_C(0xFDAD2083C7894A9C),
/*  295 */ UINT64_C(0x975DEB424EA33264),
/*  296 */ UINT64_C(0xBE3D1A29932E4D44),
/*  297 */ UINT64_C(0x272A34D1BB12FCC1),
/*  298 */ UINT64_C(0xE311481ABF38DD83),
/*  299 */ UINT64_C(0xDA14C43CAA752FC9),
/*  300 */ UINT64_C(0x99A367B15A9859E0),
/*  301 */ UINT64_C(0x2FF950E9D10D98F3),
/*  302 */ UINT64_C(0x41C24EC02007E75D),
/*  303 */ UINT64_C(0x377C2365772B7023),
/*  304 */ UINT64_C(0x52354238AFBA8950),
/*  305 */ UINT64_C(0x36E08C3787F2B932),
/*  306 */ UINT64_C(0x169BEC3654918159),
/*  307 */ UINT64_C(0x2D69ABA4460B2A20),
/*  308 */ UINT64_C(0x944231535D0E5CB5),
/*  309 */ UINT64_C(0x9AD57CEAA3F4D502),
/*  310 */ UINT64_C(0x6C6607367C770064),
/*  311 */ UINT64_C(0x3F53C295B2107168),
/*  312 */ UINT64_C(0x39DE4B927B330EC9),
/*  313 */ UINT64_C(0x3F614F4268A7207D),
/*  314 */ UINT64_C(0x4A8E249CD37074F4),
/*  315 */ UINT64_C(0x79F511599B7A38E3),
/*  316 */ UINT64_C(0xA4D744F09F469708),
/*  317 */ UINT64_C(0x81C34F144E3FEAF1),
/*  318 */ UINT64_C(0x52A27714556FF00E),
/*  319 */ UINT64_C(0x01F2CCF5C4BCCE4F),
/*  320 */ UINT64_C(0x64DA234C2E712477),
/*  321 */ UINT64_C(0xCB66C4F8DBF4B820),
/*  322 */ UINT64_C(0xA574A1CF54CCE281),
/*  323 */ UINT64_C(0x13ECA00874A77177),
/*  324 */ UINT64_C(0xB30AA63CE94EAA50),
/*  325 */ UINT64_C(0x9C44CFB94AF4FE3B),
/*  326 */ UINT64_C(0x47AFB3190DC59D81),
/*  327 */ UINT64_C(0x37BDC925A72900D9),
/*  328 */ UINT64_C(0x5CE2C15010664BDD),
/*  329 */ UINT64_C(0xD8A3A021E11E4FF3),
/*  330 */ UINT64_C(0xB1F539E07B68F9D6),
/*  331 */ UINT64_C(0x7256B134536F77C3),
/*  332 */ UINT64_C(0xD919AAF1A5B80460),
/*  333 */ UINT64_C(0xBD5FB9AEBF51F99A),
/*  334 */ UINT64_C(0x5D4EC82595B7DC78),
/*  335 */ UINT64_C(0x8CE00D490BF74414),
/*  336 */ UINT64_C(0x881C8448720D190E),
/*  337 */ UINT64_C(0x4FF41046EE662503),
/*  338 */ UINT64_C(0x40C800D046B76C34),
/*  339 */ UINT64_C(0x17249750970F9337),
/*  340 */ UINT64_C(0x2ED0EE8E72D57035),
/*  341 */ UINT64_C(0xF14DB56679CA07A3),
/*  342 */ UINT64_C(0x7E2A8A566493B1C4),
/*  343 */ UINT64_C(0xE491CF7A722DF067),
/*  344 */ UINT64_C(0x7E33BE1B43BDE759),
/*  345 */ UINT64_C(0xD28623C2B53BC048),
/*  346 */ UINT64_C(0xD27A7E8BC20CE955),
/*  347 */ UINT64_C(0xE7B87294C7A3246B),
/*  348 */ UINT64_C(0xC684639A6593A8FB),
/*  349 */ UINT64_C(0xD5F04A2DF8388C3E),
/*  350 */ UINT64_C(0x1134046069633829),
/*  351 */ UINT64_C(0x3BA0A50270EC5319),
/*  352 */ UINT64_C(0x3CD41F4AF0068CB5),
/*  353 */ UINT64_C(0x66D584A229B1FFAC),
/*  354 */ UINT64_C(0xFAF9FB4353BFED9A),
/*  355 */ UINT64_C(0xC75689474365A482),
/*  356 */ UINT64_C(0xDCF332EE5B0C5FA4),
/*  357 */ UINT64_C(0x6C6B53AB34C1DADC),
/*  358 */ UINT64_C(0x01A7BD2F281250A2),
/*  359 */ UINT64_C(0xE9A392E34F1D1A99),
/*  360 */ UINT64_C(0x26F4688E162185F4),
/*  361 */ UINT64_C(0x0208909DBCAD27A7),
/*  362 */ UINT64_C(0xD87B4C53397F1BEB),
/*  363 */ UINT64_C(0x6E39035F95B18963),
/*  364 */ UINT64_C(0x9E545997C0EF06D7),
/*  365 */ UINT64_C(0x5A82F90F54FFB7ED),
/*  366 */ UINT64_C(0x9F0E4ECA63072885),
/*  367 */ UINT64_C(0x76C13DF91F5E79C6),
/*  368 */ UINT64_C(0xB0FDCAB463CB3FEE),
/*  369 */ UINT64_C(0x2D5E16A986CA9EE3),
/*  370 */ UINT64_C(0x7E1FE50422816193),
/*  371 */ UINT64_C(0x87E3D4249889F93A),
/*  372 */ UINT64_C(0xD4187052804D40BD),
/*  373 */ UINT64_C(0xEF29C500D5C1E9C6),
/*  374 */ UINT64_C(0xF31A357E49B11A77),
/*  375 */ UINT64_C(0x84E6943FEE1E6205),
/*  376 */ UINT64_C(0xA18FCE1EAF124327),
/*  377 */ UINT64_C(0xF16004742986CFE8),
/*  378 */ UINT64_C(0x20EF33CD77AB8D53),
/*  379 */ UINT64_C(0x349D1E2AF7D638E0),
/*  380 */ UINT64_C(0xBFF4AEAD692EF59A),
/*  381 */ UINT64_C(0x079096F2F3BC414A),
/*  382 */ UINT64_C(0x80D0350507A67659),
/*  383 */ UINT64_C(0x2148883E9150EEAB),
/*  384 */ UINT64_C(0x4E3CF33317999CD9),
/*  385 */ UINT64_C(0x18124DC77F6ADB59),
/*  386 */ UINT64_C(0x581EF8C3E8569F56),
/*  387 */ UINT64_C(0x25CBBBAF4494D6F7),
/*  388 */ UINT64_C(0x5110A6AD573940EA),
/*  389 */ UINT64_C(0x2BDD3EB8A0B94B7E),
/*  390 */ UINT64_C(0xCFC3C3B618E262B2),
/*  391 */ UINT64_C(0xB37DFB3931ADFAFE),
/*  392 */ UINT64_C(0x0AD1DB7E303FAFC1),
/*  393 */ UINT64_C(0xC84ADA1D2CF3B63F),
/*  394 */ UINT64_C(0xFB718FF83D893A12),
/*  395 */ UINT64_C(0x9E339CA5FBAA7948),
/*  396 */ UINT64_C(0x77327A53C708AD4A),
/*  397 */ UINT64_C(0x17610F37352D9E64),
/*  398 */ UINT64_C(0x013317739B7303B1),
/*  399 */ UINT64_C(0xC6AE0BC71B02240A),
/*  400 */ UINT64_C(0xD570912DC8E32B93),
/*  401 */ UINT64_C(0x0F71DB3BF8639DED),
/*  402 */ UINT64_C(0x2DE8C04441B227DE),
/*  403 */ UINT64_C(0x4BA0F9879B27C928),
/*  404 */ UINT64_C(0x59311E4CD5FB8443),
/*  405 */ UINT64_C(0x1EB79B054D0224AD),
/*  406 */ UINT64_C(0xC4A224A6F294F681),
/*  407 */ UINT64_C(0x5E51C21CBD28B4E4),
/*  408 */ UINT64_C(0x94337C13D7182F20),
/*  409 */ UINT64_C(0x907E5C0C0B63883F),
/*  410 */ UINT64_C(0x02057DC4008A941A),
/*  411 */ UINT64_C(0x7AEF44C1441C8AEA),
/*  412 */ UINT64_C(0x41B0FE738B5F1298),
/*  413 */ UINT64_C(0xA70FBC6B2855280A),
/*  414 */ UINT64_C(0xCA205955262DC7D4),
/*  415 */ UINT64_C(0xB1C36C45968CF49B),
/*  416 */ UINT64_C(0x68DABBFF5A94A34A),
/*  417 */ UINT64_C(0x6DC49FF34BE1FB12),
/*  418 */ UINT64_C(0xAA878BF11F9BEF0C),
/*  419 */ UINT64_C(0x95EF8B6552012D3F),
/*  420 */ UINT64_C(0xEAF8F25F49457756),
/*  421 */ UINT64_C(0xF957E32B0C15EEB4),
/*  422 */ UINT64_C(0x79E4032367D4CD8C),
/*  423 */ UINT64_C(0xFA8C15A4CD6BB6B3),
/*  424 */ UINT64_C(0xA8A25A7D96BB8FB6),
/*  425 */ UINT64_C(0xF305B4A67B51DC9D),
/*  426 */ UINT64_C(0x74E0C0634C70DF8D),
/*  427 */ UINT64_C(0x5938C88BD4E489DF),
/*  428 */ UINT64_C(0x9CCFC90EAF1E8F34),
/*  429 */ UINT64_C(0x7A23FFF27ED51FEF),
/*  430 */ UINT64_C(0x3B14C684AD721653),
/*  431 */ UINT64_C(0x54D6CE2E476A0E09),
/*  432 */ UINT64_C(0x1A75F59AFF79B52B),
/*  433 */ UINT64_C(0x068B0716AD92D7F8),
/*  434 */ UINT64_C(0x59656116A78F6046),
/*  435 */ UINT64_C(0x38C08E8AEC3C0572),
/*  436 */ UINT64_C(0x3AE5534670C57A9C),
/*  437 */ UINT64_C(0x813E3E94639BD68F),
/*  438 */ UINT64_C(0x2293CD95B6ECEA60),
/*  439 */ UINT64_C(0xA66A8E88A631DD03),
/*  440 */ UINT64_C(0xDBF03DDD97E18BBA),
/*  441 */ UINT64_C(0x11C03139D06414AF),
/*  442 */ UINT64_C(0xED1FB49BB8D7FB18),
/*  443 */ UINT64_C(0x5228FECF86019770),
/*  444 */ UINT64_C(0xE9EC3F58F4022094),
/*  445 */ UINT64_C(0x455D2E3A5E75D021),
/*  446 */ UINT64_C(0xA980742BA4C0CD94),
/*  447 */ UINT64_C(0x0E933DE2DC338A4F),
/*  448 */ UINT64_C(0xF52917026D82B1B3),
/*  449 */ UINT64_C(0x453AD57EF52F264D),
/*  450 */ UINT64_C(0x43C224F6DC9FAB1E),
/*  451 */ UINT64_C(0x9EAB1C2A820C4F82),
/*  452 */ UINT64_C(0x810B4486C08154F1),
/*  453 */ UINT64_C(0x41969822CFE224EA),
/*  454 */ UINT64_C(0xA9DD2E187648FC8E),
/*  455 */ UINT64_C(0xAF7F80593FFD9B5E),
/*  456 */ UINT64_C(0x4AD56D7BA71C230B),
/*  457 */ UINT64_C(0x3C68F395F1025D6E),
/*  458 */ UINT64_C(0x1EA9FC5E852AF704),
/*  459 */ UINT64_C(0x54169BC0BD840364),
/*  460 */ UINT64_C(0x5F78A16BAF514B97),
/*  461 */ UINT64_C(0xBA3121302CA679B4),
/*  462 */ UINT64_C(0x9380A55CF31969D6),
/*  463 */ UINT64_C(0xEA43D721E50E6018),
/*  464 */ UINT64_C(0x509019658668E05F),
/*  465 */ UINT64_C(0x9928AD617A57D107),
/*  466 */ UINT64_C(0x28D8A49A8D014728),
/*  467 */ UINT64_C(0x491AC304E3CFACFC),
/*  468 */ UINT64_C(0x184FA98862B0D081),
/*  469 */ UINT64_C(0x9D3C123528FAF8A3),
/*  470 */ UINT64_C(0x475FE42F8EFE4125),
/*  471 */ UINT64_C(0x657578F8D9AFB7FF),
/*  472 */ UINT64_C(0x98B537979A3EC407),
/*  473 */ UINT64_C(0x2E50E8C7A7E6CF40),
/*  474 */ UINT64_C(0xB25045F097BF4F06),
/*  475 */ UINT64_C(0x013D4C76C8529B7A),
/*  476 */ UINT64_C(0x74ACBDC222C5E2E6),
/*  477 */ UINT64_C(0x9B7C39A9B6D2CBA8),
/*  478 */ UINT64_C(0x38432D4424266DA5),
/*  479 */ UINT64_C(0xC24D57721B866BB1),
};

const output_type f64_to_f32_LUT_output[480] = {
/*    0 */ UINT32_C(0x00000000),
/*    1 */ UINT32_C(0x00000000),
/*    2 */ UINT32_C(0x00000000),
/*    3 */ UINT32_C(0x3F000000),
/*    4 */ UINT32_C(0x3F800000),
/*    5 */ UINT32_C(0x40000000),
/*    6 */ UINT32_C(0x7F800000),
/*    7 */ UINT32_C(0x7F800000),
/*    8 */ UINT32_C(0x7FC00000),
/*    9 */ UINT32_C(0x7FE00000),
/*   10 */ UINT32_C(0x3F000000),
/*   11 */ UINT32_C(0x3F800000),
/*   12 */ UINT32_C(0x40000000),
/*   13 */ UINT32_C(0x3F000000),
/*   14 */ UINT32_C(0x3F800000),
/*   15 */ UINT32_C(0x40000000),
/*   16 */ UINT32_C(0x00000000),
/*   17 */ UINT32_C(0x00000000),
/*   18 */ UINT32_C(0x00000000),
/*   19 */ UINT32_C(0x7F800000),
/*   20 */ UINT32_C(0x80000000),
/*   21 */ UINT32_C(0x80000000),
/*   22 */ UINT32_C(0x80000000),
/*   23 */ UINT32_C(0xBF000000),
/*   24 */ UINT32_C(0xBF800000),
/*   25 */ UINT32_C(0xC0000000),
/*   26 */ UINT32_C(0xFF800000),
/*   27 */ UINT32_C(0xFF800000),
/*   28 */ UINT32_C(0xFFC00000),
/*   29 */ UINT32_C(0xFFE00000),
/*   30 */ UINT32_C(0xBF000000),
/*   31 */ UINT32_C(0xBF800000),
/*   32 */ UINT32_C(0xC0000000),
/*   33 */ UINT32_C(0xBF000000),
/*   34 */ UINT32_C(0xBF800000),
/*   35 */ UINT32_C(0xC0000000),
/*   36 */ UINT32_C(0x80000000),
/*   37 */ UINT32_C(0x80000000),
/*   38 */ UINT32_C(0x80000000),
/*   39 */ UINT32_C(0xFF800000),
/*   40 */ UINT32_C(0x7F800000),
/*   41 */ UINT32_C(0x75E0F063),
/*   42 */ UINT32_C(0xFF800000),
/*   43 */ UINT32_C(0x00000000),
/*   44 */ UINT32_C(0xFF800000),
/*   45 */ UINT32_C(0x7F800000),
/*   46 */ UINT32_C(0x80000000),
/*   47 */ UINT32_C(0x7F800000),
/*   48 */ UINT32_C(0x00000000),
/*   49 */ UINT32_C(0x80000000),
/*   50 */ UINT32_C(0xFF800000),
/*   51 */ UINT32_C(0xFF800000),
/*   52 */ UINT32_C(0x91DF9C62),
/*   53 */ UINT32_C(0x00000000),
/*   54 */ UINT32_C(0x7F800000),
/*   55 */ UINT32_C(0xFF800000),
/*   56 */ UINT32_C(0x1F1691E3),
/*   57 */ UINT32_C(0xFF800000),
/*   58 */ UINT32_C(0x00000000),
/*   59 */ UINT32_C(0x7F800000),
/*   60 */ UINT32_C(0xFF800000),
/*   61 */ UINT32_C(0x80000000),
/*   62 */ UINT32_C(0x7F800000),
/*   63 */ UINT32_C(0x80000000),
/*   64 */ UINT32_C(0xA5E7D023),
/*   65 */ UINT32_C(0x00000000),
/*   66 */ UINT32_C(0x80000000),
/*   67 */ UINT32_C(0x7F800000),
/*   68 */ UINT32_C(0x00000000),
/*   69 */ UINT32_C(0x00000000),
/*   70 */ UINT32_C(0xFF800000),
/*   71 */ UINT32_C(0x0000007D),
/*   72 */ UINT32_C(0x80000000),
/*   73 */ UINT32_C(0x00000000),
/*   74 */ UINT32_C(0x80000000),
/*   75 */ UINT32_C(0xFF800000),
/*   76 */ UINT32_C(0x00000000),
/*   77 */ UINT32_C(0x7F800000),
/*   78 */ UINT32_C(0xFF800000),
/*   79 */ UINT32_C(0xFF800000),
/*   80 */ UINT32_C(0x80000000),
/*   81 */ UINT32_C(0x80000000),
/*   82 */ UINT32_C(0x00000000),
/*   83 */ UINT32_C(0x00000000),
/*   84 */ UINT32_C(0x7F800000),
/*   85 */ UINT32_C(0x00000000),
/*   86 */ UINT32_C(0xFF800000),
/*   87 */ UINT32_C(0x80000000),
/*   88 */ UINT32_C(0x80000000),
/*   89 */ UINT32_C(0xFF800000),
/*   90 */ UINT32_C(0xF6816F62),
/*   91 */ UINT32_C(0x80000000),
/*   92 */ UINT32_C(0x7F800000),
/*   93 */ UINT32_C(0x80000000),
/*   94 */ UINT32_C(0x80000000),
/*   95 */ UINT32_C(0x80000000),
/*   96 */ UINT32_C(0x7F800000),
/*   97 */ UINT32_C(0x7F800000),
/*   98 */ UINT32_C(0xFF800000),
/*   99 */ UINT32_C(0x7F800000),
/*  100 */ UINT32_C(0xFF800000),
/*  101 */ UINT32_C(0x7F800000),
/*  102 */ UINT32_C(0x80000000),
/*  103 */ UINT32_C(0xFF800000),
/*  104 */ UINT32_C(0x1981F0E6),
/*  105 */ UINT32_C(0xFF800000),
/*  106 */ UINT32_C(0x80000000),
/*  107 */ UINT32_C(0x00000000),
/*  108 */ UINT32_C(0x00000000),
/*  109 */ UINT32_C(0xFF800000),
/*  110 */ UINT32_C(0x9BBE27DA),
/*  111 */ UINT32_C(0xFF800000),
/*  112 */ UINT32_C(0xFF800000),
/*  113 */ UINT32_C(0x7F800000),
/*  114 */ UINT32_C(0x4C4015D7),
/*  115 */ UINT32_C(0x00000000),
/*  116 */ UINT32_C(0xFF800000),
/*  117 */ UINT32_C(0x7F800000),
/*  118 */ UINT32_C(0xFF800000),
/*  119 */ UINT32_C(0x7F800000),
/*  120 */ UINT32_C(0x00000000),
/*  121 */ UINT32_C(0xAECB4CA5),
/*  122 */ UINT32_C(0xFF800000),
/*  123 */ UINT32_C(0x7F800000),
/*  124 */ UINT32_C(0x7F800000),
/*  125 */ UINT32_C(0xFF800000),
/*  126 */ UINT32_C(0xFF800000),
/*  127 */ UINT32_C(0x80000000),
/*  128 */ UINT32_C(0x00000000),
/*  129 */ UINT32_C(0x80000000),
/*  130 */ UINT32_C(0x00000000),
/*  131 */ UINT32_C(0x80000000),
/*  132 */ UINT32_C(0x00000000),
/*  133 */ UINT32_C(0x80000000),
/*  134 */ UINT32_C(0x00000000),
/*  135 */ UINT32_C(0xFF800000),
/*  136 */ UINT32_C(0x80000000),
/*  137 */ UINT32_C(0x00000000),
/*  138 */ UINT32_C(0x7F800000),
/*  139 */ UINT32_C(0x7F800000),
/*  140 */ UINT32_C(0x75C7C523),
/*  141 */ UINT32_C(0x80000000),
/*  142 */ UINT32_C(0x80000000),
/*  143 */ UINT32_C(0x80000000),
/*  144 */ UINT32_C(0x80000000),
/*  145 */ UINT32_C(0xD081EB3A),
/*  146 */ UINT32_C(0x80000000),
/*  147 */ UINT32_C(0x80000000),
/*  148 */ UINT32_C(0x8000CA2E),
/*  149 */ UINT32_C(0x80000000),
/*  150 */ UINT32_C(0x00000000),
/*  151 */ UINT32_C(0xFF800000),
/*  152 */ UINT32_C(0x00000000),
/*  153 */ UINT32_C(0x00000000),
/*  154 */ UINT32_C(0x2BB47203),
/*  155 */ UINT32_C(0x7F800000),
/*  156 */ UINT32_C(0x747A7B2D),
/*  157 */ UINT32_C(0x7F800000),
/*  158 */ UINT32_C(0x00000000),
/*  159 */ UINT32_C(0x00000000),
/*  160 */ UINT32_C(0x80000000),
/*  161 */ UINT32_C(0x7F800000),
/*  162 */ UINT32_C(0x7F800000),
/*  163 */ UINT32_C(0xFF800000),
/*  164 */ UINT32_C(0xFF800000),
/*  165 */ UINT32_C(0xFF800000),
/*  166 */ UINT32_C(0x80000000),
/*  167 */ UINT32_C(0x00000000),
/*  168 */ UINT32_C(0x7F800000),
/*  169 */ UINT32_C(0xFF800000),
/*  170 */ UINT32_C(0x00000000),
/*  171 */ UINT32_C(0x80000000),
/*  172 */ UINT32_C(0xFF800000),
/*  173 */ UINT32_C(0x7F800000),
/*  174 */ UINT32_C(0x7F800000),
/*  175 */ UINT32_C(0x80000000),
/*  176 */ UINT32_C(0x00000000),
/*  177 */ UINT32_C(0x7F800000),
/*  178 */ UINT32_C(0x80000000),
/*  179 */ UINT32_C(0xFF800000),
/*  180 */ UINT32_C(0xFF800000),
/*  181 */ UINT32_C(0xCCEFAED4),
/*  182 */ UINT32_C(0x00000000),
/*  183 */ UINT32_C(0x7F800000),
/*  184 */ UINT32_C(0x00000000),
/*  185 */ UINT32_C(0x80000000),
/*  186 */ UINT32_C(0x00000000),
/*  187 */ UINT32_C(0x80000000),
/*  188 */ UINT32_C(0x7F800000),
/*  189 */ UINT32_C(0x80000000),
/*  190 */ UINT32_C(0x80000000),
/*  191 */ UINT32_C(0x00000000),
/*  192 */ UINT32_C(0xFF800000),
/*  193 */ UINT32_C(0xFF800000),
/*  194 */ UINT32_C(0xFF800000),
/*  195 */ UINT32_C(0xFF800000),
/*  196 */ UINT32_C(0x000235A1),
/*  197 */ UINT32_C(0xFF800000),
/*  198 */ UINT32_C(0xFF800000),
/*  199 */ UINT32_C(0xFF800000),
/*  200 */ UINT32_C(0xFF800000),
/*  201 */ UINT32_C(0x80000000),
/*  202 */ UINT32_C(0xFF800000),
/*  203 */ UINT32_C(0x7F800000),
/*  204 */ UINT32_C(0x00000000),
/*  205 */ UINT32_C(0xFF800000),
/*  206 */ UINT32_C(0x80000000),
/*  207 */ UINT32_C(0x7F800000),
/*  208 */ UINT32_C(0x7F800000),
/*  209 */ UINT32_C(0xFF800000),
/*  210 */ UINT32_C(0x7F800000),
/*  211 */ UINT32_C(0x7F800000),
/*  212 */ UINT32_C(0xFF800000),
/*  213 */ UINT32_C(0xFF800000),
/*  214 */ UINT32_C(0xFF800000),
/*  215 */ UINT32_C(0x80000000),
/*  216 */ UINT32_C(0xFF800000),
/*  217 */ UINT32_C(0xFF800000),
/*  218 */ UINT32_C(0x80000AB0),
/*  219 */ UINT32_C(0x00000000),
/*  220 */ UINT32_C(0xFF800000),
/*  221 */ UINT32_C(0x00000000),
/*  222 */ UINT32_C(0x00000000),
/*  223 */ UINT32_C(0x85539A3A),
/*  224 */ UINT32_C(0x80000000),
/*  225 */ UINT32_C(0x80000000),
/*  226 */ UINT32_C(0xFF800000),
/*  227 */ UINT32_C(0xFF800000),
/*  228 */ UINT32_C(0xFF800000),
/*  229 */ UINT32_C(0xFF800000),
/*  230 */ UINT32_C(0x00000000),
/*  231 */ UINT32_C(0xFF800000),
/*  232 */ UINT32_C(0x7F800000),
/*  233 */ UINT32_C(0xFF800000),
/*  234 */ UINT32_C(0xA4F91503),
/*  235 */ UINT32_C(0xD1BF4E72),
/*  236 */ UINT32_C(0x80000000),
/*  237 */ UINT32_C(0x7F800000),
/*  238 */ UINT32_C(0x80000000),
/*  239 */ UINT32_C(0x00000000),
/*  240 */ UINT32_C(0xFF800000),
/*  241 */ UINT32_C(0x49234D2C),
/*  242 */ UINT32_C(0xFF800000),
/*  243 */ UINT32_C(0x00000000),
/*  244 */ UINT32_C(0x7F800000),
/*  245 */ UINT32_C(0x7F800000),
/*  246 */ UINT32_C(0x00000000),
/*  247 */ UINT32_C(0x7F800000),
/*  248 */ UINT32_C(0x7F800000),
/*  249 */ UINT32_C(0x80000000),
/*  250 */ UINT32_C(0x00000000),
/*  251 */ UINT32_C(0x80000000),
/*  252 */ UINT32_C(0xFF800000),
/*  253 */ UINT32_C(0x00000000),
/*  254 */ UINT32_C(0x00000000),
/*  255 */ UINT32_C(0x7F800000),
/*  256 */ UINT32_C(0x80000000),
/*  257 */ UINT32_C(0x80000000),
/*  258 */ UINT32_C(0x80000000),
/*  259 */ UINT32_C(0x00000000),
/*  260 */ UINT32_C(0x00000000),
/*  261 */ UINT32_C(0x5C312CA3),
/*  262 */ UINT32_C(0x80000000),
/*  263 */ UINT32_C(0x7F800000),
/*  264 */ UINT32_C(0xFF800000),
/*  265 */ UINT32_C(0x80000000),
/*  266 */ UINT32_C(0xFF800000),
/*  267 */ UINT32_C(0x80000000),
/*  268 */ UINT32_C(0xFF800000),
/*  269 */ UINT32_C(0xD500FB6C),
/*  270 */ UINT32_C(0x00000000),
/*  271 */ UINT32_C(0x00000000),
/*  272 */ UINT32_C(0xFF800000),
/*  273 */ UINT32_C(0x80000000),
/*  274 */ UINT32_C(0x80000000),
/*  275 */ UINT32_C(0x00000000),
/*  276 */ UINT32_C(0x80000000),
/*  277 */ UINT32_C(0xFF800000),
/*  278 */ UINT32_C(0x7F800000),
/*  279 */ UINT32_C(0xFF800000),
/*  280 */ UINT32_C(0xB8D8E878),
/*  281 */ UINT32_C(0x80000000),
/*  282 */ UINT32_C(0x80000000),
/*  283 */ UINT32_C(0xFF800000),
/*  284 */ UINT32_C(0x80000000),
/*  285 */ UINT32_C(0x80000000),
/*  286 */ UINT32_C(0xFF800000),
/*  287 */ UINT32_C(0xE8FDCBE3),
/*  288 */ UINT32_C(0xFF800000),
/*  289 */ UINT32_C(0xFF800000),
/*  290 */ UINT32_C(0xFF800000),
/*  291 */ UINT32_C(0xFF800000),
/*  292 */ UINT32_C(0x80000000),
/*  293 */ UINT32_C(0x00000000),
/*  294 */ UINT32_C(0xFF800000),
/*  295 */ UINT32_C(0x80000000),
/*  296 */ UINT32_C(0xB1E8D14D),
/*  297 */ UINT32_C(0x00000000),
/*  298 */ UINT32_C(0xFF800000),
/*  299 */ UINT32_C(0xFF800000),
/*  300 */ UINT32_C(0x80000000),
/*  301 */ UINT32_C(0x00000000),
/*  302 */ UINT32_C(0x4E127601),
/*  303 */ UINT32_C(0x00003847),
/*  304 */ UINT32_C(0x7F800000),
/*  305 */ UINT32_C(0x00000011),
/*  306 */ UINT32_C(0x00000000),
/*  307 */ UINT32_C(0x00000000),
/*  308 */ UINT32_C(0x80000000),
/*  309 */ UINT32_C(0x80000000),
/*  310 */ UINT32_C(0x7F800000),
/*  311 */ UINT32_C(0x3A9E14AE),
/*  312 */ UINT32_C(0x0EF25C94),
/*  313 */ UINT32_C(0x3B0A7A13),
/*  314 */ UINT32_C(0x7F800000),
/*  315 */ UINT32_C(0x7F800000),
/*  316 */ UINT32_C(0x80000000),
/*  317 */ UINT32_C(0x80000000),
/*  318 */ UINT32_C(0x7F800000),
/*  319 */ UINT32_C(0x00000000),
/*  320 */ UINT32_C(0x7F800000),
/*  321 */ UINT32_C(0xFF800000),
/*  322 */ UINT32_C(0x80000000),
/*  323 */ UINT32_C(0x00000000),
/*  324 */ UINT32_C(0x80000000),
/*  325 */ UINT32_C(0x80000000),
/*  326 */ UINT32_C(0x7D7D98C8),
/*  327 */ UINT32_C(0x0003B925),
/*  328 */ UINT32_C(0x7F800000),
/*  329 */ UINT32_C(0xFF800000),
/*  330 */ UINT32_C(0x80000000),
/*  331 */ UINT32_C(0x7F800000),
/*  332 */ UINT32_C(0xFF800000),
/*  333 */ UINT32_C(0xAAFDCD76),
/*  334 */ UINT32_C(0x7F800000),
/*  335 */ UINT32_C(0x80000000),
/*  336 */ UINT32_C(0x80000000),
/*  337 */ UINT32_C(0x7F800000),
/*  338 */ UINT32_C(0x46400682),
/*  339 */ UINT32_C(0x00000000),
/*  340 */ UINT32_C(0x00000000),
/*  341 */ UINT32_C(0xFF800000),
/*  342 */ UINT32_C(0x7F800000),
/*  343 */ UINT32_C(0xFF800000),
/*  344 */ UINT32_C(0x7F800000),
/*  345 */ UINT32_C(0xFF800000),
/*  346 */ UINT32_C(0xFF800000),
/*  347 */ UINT32_C(0xFF800000),
/*  348 */ UINT32_C(0xF4231CD3),
/*  349 */ UINT32_C(0xFF800000),
/*  350 */ UINT32_C(0x00000000),
/*  351 */ UINT32_C(0x1D052814),
/*  352 */ UINT32_C(0x26A0FA58),
/*  353 */ UINT32_C(0x7F800000),
/*  354 */ UINT32_C(0xFF800000),
/*  355 */ UINT32_C(0xFAB44A3A),
/*  356 */ UINT32_C(0xFF800000),
/*  357 */ UINT32_C(0x7F800000),
/*  358 */ UINT32_C(0x00000000),
/*  359 */ UINT32_C(0xFF800000),
/*  360 */ UINT32_C(0x00000000),
/*  361 */ UINT32_C(0x00000000),
/*  362 */ UINT32_C(0xFF800000),
/*  363 */ UINT32_C(0x7F800000),
/*  364 */ UINT32_C(0x80000000),
/*  365 */ UINT32_C(0x7F800000),
/*  366 */ UINT32_C(0x80000000),
/*  367 */ UINT32_C(0x7F800000),
/*  368 */ UINT32_C(0x80000000),
/*  369 */ UINT32_C(0x00000000),
/*  370 */ UINT32_C(0x7F800000),
/*  371 */ UINT32_C(0x80000000),
/*  372 */ UINT32_C(0xFF800000),
/*  373 */ UINT32_C(0xFF800000),
/*  374 */ UINT32_C(0xFF800000),
/*  375 */ UINT32_C(0x80000000),
/*  376 */ UINT32_C(0x80000000),
/*  377 */ UINT32_C(0xFF800000),
/*  378 */ UINT32_C(0x00000000),
/*  379 */ UINT32_C(0x00000000),
/*  380 */ UINT32_C(0xBFA5756B),
/*  381 */ UINT32_C(0x00000000),
/*  382 */ UINT32_C(0x80000000),
/*  383 */ UINT32_C(0x00000000),
/*  384 */ UINT32_C(0x7F800000),
/*  385 */ UINT32_C(0x00000000),
/*  386 */ UINT32_C(0x7F800000),
/*  387 */ UINT32_C(0x00000000),
/*  388 */ UINT32_C(0x7F800000),
/*  389 */ UINT32_C(0x00000000),
/*  390 */ UINT32_C(0xFF800000),
/*  391 */ UINT32_C(0x80000000),
/*  392 */ UINT32_C(0x00000000),
/*  393 */ UINT32_C(0xFF800000),
/*  394 */ UINT32_C(0xFF800000),
/*  395 */ UINT32_C(0x80000000),
/*  396 */ UINT32_C(0x7F800000),
/*  397 */ UINT32_C(0x00000000),
/*  398 */ UINT32_C(0x00000000),
/*  399 */ UINT32_C(0xF5705E39),
/*  400 */ UINT32_C(0xFF800000),
/*  401 */ UINT32_C(0x00000000),
/*  402 */ UINT32_C(0x00000000),
/*  403 */ UINT32_C(0x7F800000),
/*  404 */ UINT32_C(0x7F800000),
/*  405 */ UINT32_C(0x00000000),
/*  406 */ UINT32_C(0xE5112538),
/*  407 */ UINT32_C(0x7F800000),
/*  408 */ UINT32_C(0x80000000),
/*  409 */ UINT32_C(0x80000000),
/*  410 */ UINT32_C(0x00000000),
/*  411 */ UINT32_C(0x7F800000),
/*  412 */ UINT32_C(0x4D87F39C),
/*  413 */ UINT32_C(0x80000000),
/*  414 */ UINT32_C(0xFF800000),
/*  415 */ UINT32_C(0x80000000),
/*  416 */ UINT32_C(0x7F800000),
/*  417 */ UINT32_C(0x7F800000),
/*  418 */ UINT32_C(0x80000000),
/*  419 */ UINT32_C(0x80000000),
/*  420 */ UINT32_C(0xFF800000),
/*  421 */ UINT32_C(0xFF800000),
/*  422 */ UINT32_C(0x7F800000),
/*  423 */ UINT32_C(0xFF800000),
/*  424 */ UINT32_C(0x80000000),
/*  425 */ UINT32_C(0xFF800000),
/*  426 */ UINT32_C(0x7F800000),
/*  427 */ UINT32_C(0x7F800000),
/*  428 */ UINT32_C(0x80000000),
/*  429 */ UINT32_C(0x7F800000),
/*  430 */ UINT32_C(0x18A63425),
/*  431 */ UINT32_C(0x7F800000),
/*  432 */ UINT32_C(0x00000000),
/*  433 */ UINT32_C(0x00000000),
/*  434 */ UINT32_C(0x7F800000),
/*  435 */ UINT32_C(0x06047457),
/*  436 */ UINT32_C(0x172A9A34),
/*  437 */ UINT32_C(0x80000000),
/*  438 */ UINT32_C(0x00000000),
/*  439 */ UINT32_C(0x80000000),
/*  440 */ UINT32_C(0xFF800000),
/*  441 */ UINT32_C(0x00000000),
/*  442 */ UINT32_C(0xFF800000),
/*  443 */ UINT32_C(0x7F800000),
/*  444 */ UINT32_C(0xFF800000),
/*  445 */ UINT32_C(0x6AE971D3),
/*  446 */ UINT32_C(0x80000000),
/*  447 */ UINT32_C(0x00000000),
/*  448 */ UINT32_C(0xFF800000),
/*  449 */ UINT32_C(0x69D6ABF8),
/*  450 */ UINT32_C(0x5E1127B7),
/*  451 */ UINT32_C(0x80000000),
/*  452 */ UINT32_C(0x80000000),
/*  453 */ UINT32_C(0x4CB4C116),
/*  454 */ UINT32_C(0x80000000),
/*  455 */ UINT32_C(0x80000000),
/*  456 */ UINT32_C(0x7F800000),
/*  457 */ UINT32_C(0x23479CB0),
/*  458 */ UINT32_C(0x00000000),
/*  459 */ UINT32_C(0x7F800000),
/*  460 */ UINT32_C(0x7F800000),
/*  461 */ UINT32_C(0x91890981),
/*  462 */ UINT32_C(0x80000000),
/*  463 */ UINT32_C(0xFF800000),
/*  464 */ UINT32_C(0x7F800000),
/*  465 */ UINT32_C(0x80000000),
/*  466 */ UINT32_C(0x00000000),
/*  467 */ UINT32_C(0x7F800000),
/*  468 */ UINT32_C(0x00000000),
/*  469 */ UINT32_C(0x80000000),
/*  470 */ UINT32_C(0x7AFF217C),
/*  471 */ UINT32_C(0x7F800000),
/*  472 */ UINT32_C(0x80000000),
/*  473 */ UINT32_C(0x00000000),
/*  474 */ UINT32_C(0x80000000),
/*  475 */ UINT32_C(0x00000000),
/*  476 */ UINT32_C(0x7F800000),
/*  477 */ UINT32_C(0x80000000),
/*  478 */ UINT32_C(0x02196A21),
/*  479 */ UINT32_C(0xD26ABB91),
};

#endif /* F64_TO_F32_LUT_H */
