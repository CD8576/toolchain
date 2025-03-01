#ifndef F64_ROUNDING_LUT_H
#define F64_ROUNDING_LUT_H

#include <stdint.h>

/* Generated 2025-03-01T23:00:42Z */

typedef uint64_t input_type;

typedef struct { uint64_t r_floor; uint64_t r_ceil; uint64_t r_round; } output_type;

static const input_type f64_rounding_LUT_input[256] = {
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
/*   40 */ UINT64_C(0xD0C87940CF0DE5D0),
/*   41 */ UINT64_C(0x4C9A5933BED36A20),
/*   42 */ UINT64_C(0x64A559661437D3A9),
/*   43 */ UINT64_C(0x6EA153AC274F0972),
/*   44 */ UINT64_C(0x46FC5C3ADC1A4D11),
/*   45 */ UINT64_C(0xB9EC0BF80B5D7DDD),
/*   46 */ UINT64_C(0xF595353A505577D8),
/*   47 */ UINT64_C(0x6B27D43F7C1E5587),
/*   48 */ UINT64_C(0xD6F4F0BA1F1840AF),
/*   49 */ UINT64_C(0xC2AC357BD03255F4),
/*   50 */ UINT64_C(0x6098C20ABB428B55),
/*   51 */ UINT64_C(0x91F3271314BE13AF),
/*   52 */ UINT64_C(0x2FA4704BDC5F0ECA),
/*   53 */ UINT64_C(0x16354FD02D8F9157),
/*   54 */ UINT64_C(0x4A62743EE2FE2426),
/*   55 */ UINT64_C(0x57C0D3337DB5E936),
/*   56 */ UINT64_C(0x2F4E2CB5BBF19154),
/*   57 */ UINT64_C(0x4C1AE0D0612EA2CF),
/*   58 */ UINT64_C(0x75B9664683BCD957),
/*   59 */ UINT64_C(0xA6BECEF5584AF5CE),
/*   60 */ UINT64_C(0x960EDC2B5D469256),
/*   61 */ UINT64_C(0x8122EBE0860A7A37),
/*   62 */ UINT64_C(0xFAD20B56FF1A7694),
/*   63 */ UINT64_C(0xC640AA01AD668217),
/*   64 */ UINT64_C(0xC40EAC0A6C802C7F),
/*   65 */ UINT64_C(0x28121AEE51E251DB),
/*   66 */ UINT64_C(0x70DBB7ACE86F7D73),
/*   67 */ UINT64_C(0xF6ECA664F9D337D3),
/*   68 */ UINT64_C(0x7559AF772B1EA14B),
/*   69 */ UINT64_C(0xFA7E0B6855266722),
/*   70 */ UINT64_C(0xC5E820997FF5F9FE),
/*   71 */ UINT64_C(0xBD250962AB51DBAA),
/*   72 */ UINT64_C(0xDF88E095CB82D887),
/*   73 */ UINT64_C(0x3DE28E59ACF2987F),
/*   74 */ UINT64_C(0x2663514C2F14E93E),
/*   75 */ UINT64_C(0x26857A2ED74DE4EC),
/*   76 */ UINT64_C(0xA4E7B222A3A3A750),
/*   77 */ UINT64_C(0x4D864FBDC5D62799),
/*   78 */ UINT64_C(0x977A801B699BAC1F),
/*   79 */ UINT64_C(0xDC4E0C3589E23943),
/*   80 */ UINT64_C(0xF60CDFF2583E4F56),
/*   81 */ UINT64_C(0x132F1B4D01AA7B98),
/*   82 */ UINT64_C(0xAA6B3C3DF39A9F3D),
/*   83 */ UINT64_C(0xE47C191DD9ABD2B9),
/*   84 */ UINT64_C(0xAFC1E29103055474),
/*   85 */ UINT64_C(0x0796FBAAF2560A11),
/*   86 */ UINT64_C(0xFAF53A1FCB881621),
/*   87 */ UINT64_C(0x0BCF59C536337881),
/*   88 */ UINT64_C(0x0F7878908591B594),
/*   89 */ UINT64_C(0x8F7417984EDF8148),
/*   90 */ UINT64_C(0xA7014598799A8BBD),
/*   91 */ UINT64_C(0xD251AA1357A79EFD),
/*   92 */ UINT64_C(0x3BA1CB09B18D1232),
/*   93 */ UINT64_C(0xF6BCA0B80318E0EE),
/*   94 */ UINT64_C(0x12BEFCD9772E9FA4),
/*   95 */ UINT64_C(0x685B7FF325241D2D),
/*   96 */ UINT64_C(0x3268B109CD70BDE9),
/*   97 */ UINT64_C(0xAAF0985BD104A7BF),
/*   98 */ UINT64_C(0x5743A1B1586C755B),
/*   99 */ UINT64_C(0xAF8D70D00BDBA66F),
/*  100 */ UINT64_C(0x20681DF29A534AEB),
/*  101 */ UINT64_C(0xC3089C699941162D),
/*  102 */ UINT64_C(0x4845B9A29F383FD1),
/*  103 */ UINT64_C(0xBBAA6A5DD64598F5),
/*  104 */ UINT64_C(0xAF36C8AB1C2C48E1),
/*  105 */ UINT64_C(0x9691EE047CA21935),
/*  106 */ UINT64_C(0x0E4B9192AA7B5482),
/*  107 */ UINT64_C(0x95DA4364B7945B44),
/*  108 */ UINT64_C(0x93781F3642E60E61),
/*  109 */ UINT64_C(0x264827F6D50A0560),
/*  110 */ UINT64_C(0x51FC0697496AA413),
/*  111 */ UINT64_C(0x0E704AF09FCBE2B9),
/*  112 */ UINT64_C(0x273A9E3B753565F5),
/*  113 */ UINT64_C(0x9242B513865641E8),
/*  114 */ UINT64_C(0xC015A9A42A5BFF97),
/*  115 */ UINT64_C(0x6C396379563805C3),
/*  116 */ UINT64_C(0x0201647F0B44B157),
/*  117 */ UINT64_C(0x71EA34900D11ABF7),
/*  118 */ UINT64_C(0xBC62B8A7299AB3D3),
/*  119 */ UINT64_C(0xEF50FE22FB2107BE),
/*  120 */ UINT64_C(0xAD75A962EF85D07F),
/*  121 */ UINT64_C(0x6511B6111805B141),
/*  122 */ UINT64_C(0x7A2E22F94F0FD6AD),
/*  123 */ UINT64_C(0x8893DA204111371B),
/*  124 */ UINT64_C(0x5AA92FB662EF6A6E),
/*  125 */ UINT64_C(0x92ADB666421AC57C),
/*  126 */ UINT64_C(0xFE47975236EEF967),
/*  127 */ UINT64_C(0x236CB6E8B5512CFF),
/*  128 */ UINT64_C(0x546A200B47C3D892),
/*  129 */ UINT64_C(0xC184B4B6B9410B66),
/*  130 */ UINT64_C(0x8484C1105C8DDED6),
/*  131 */ UINT64_C(0xF771317ED05D9D2C),
/*  132 */ UINT64_C(0xEEBD88C3BEDC7628),
/*  133 */ UINT64_C(0xE9DB65BD9D19D782),
/*  134 */ UINT64_C(0xFC07A68C7D252A0E),
/*  135 */ UINT64_C(0x6AD00C1DFD5BB379),
/*  136 */ UINT64_C(0x85FA1508901E3CF6),
/*  137 */ UINT64_C(0xBD07303108436EBF),
/*  138 */ UINT64_C(0x079C279B08D1693E),
/*  139 */ UINT64_C(0x84B656BEFA572753),
/*  140 */ UINT64_C(0x7E8F54B55F2D9D36),
/*  141 */ UINT64_C(0x145A12510A8208E2),
/*  142 */ UINT64_C(0x9D6DF3EED7FCDF04),
/*  143 */ UINT64_C(0x5165A612C6399027),
/*  144 */ UINT64_C(0xA8161B9AC1B258E8),
/*  145 */ UINT64_C(0x4EEB7449299D8483),
/*  146 */ UINT64_C(0xDE7D361F747587E1),
/*  147 */ UINT64_C(0xF7A197EDE930040B),
/*  148 */ UINT64_C(0x2E2A9857319BCCB6),
/*  149 */ UINT64_C(0x50E588394EE84C9F),
/*  150 */ UINT64_C(0x6A72B63FAFD2BD6D),
/*  151 */ UINT64_C(0x137844FB1441604F),
/*  152 */ UINT64_C(0xA001D8F29547E765),
/*  153 */ UINT64_C(0xA57BD4E050C1DDFB),
/*  154 */ UINT64_C(0xDF3351C5D4096C6C),
/*  155 */ UINT64_C(0x81216C7FEE2BB33C),
/*  156 */ UINT64_C(0xEF1A0322D6A34552),
/*  157 */ UINT64_C(0x08186A5F46EBCAAC),
/*  158 */ UINT64_C(0xD16E16CF9B5C8899),
/*  159 */ UINT64_C(0xF90875CAA97A3D3F),
/*  160 */ UINT64_C(0x8F5F5A94EBD525A2),
/*  161 */ UINT64_C(0xF871A489BEB596E6),
/*  162 */ UINT64_C(0x628D3CDBDA755FA7),
/*  163 */ UINT64_C(0x9DA7D596797D56CD),
/*  164 */ UINT64_C(0x7F084AEF279ABF89),
/*  165 */ UINT64_C(0xA5F3B23A5AC3C71A),
/*  166 */ UINT64_C(0xBD383149E1CACAD3),
/*  167 */ UINT64_C(0x0334C73B53C29764),
/*  168 */ UINT64_C(0x5A69A7ADC5CA3EC5),
/*  169 */ UINT64_C(0x2E5DBFC4167650EA),
/*  170 */ UINT64_C(0x1552193D51032308),
/*  171 */ UINT64_C(0x51D4C1E03CA6C7BC),
/*  172 */ UINT64_C(0x766BAC53DAD40FA4),
/*  173 */ UINT64_C(0xC45ADEF1BE481E12),
/*  174 */ UINT64_C(0x71B466974ABB37EB),
/*  175 */ UINT64_C(0x9B2CA7E73F2F984E),
/*  176 */ UINT64_C(0x790552FDA3D5FBDD),
/*  177 */ UINT64_C(0x009C5D9AE027AE74),
/*  178 */ UINT64_C(0x109B5ADA15685BC1),
/*  179 */ UINT64_C(0x9369BE4961507F57),
/*  180 */ UINT64_C(0x39D5E47B7E0095B0),
/*  181 */ UINT64_C(0xD472A7CDD9C35AB4),
/*  182 */ UINT64_C(0x9F44674849A0C90D),
/*  183 */ UINT64_C(0x54172A3CC373600C),
/*  184 */ UINT64_C(0xFC7FC2D1F337AF39),
/*  185 */ UINT64_C(0xAC53F5324B06E794),
/*  186 */ UINT64_C(0xF35B44E70ED160F8),
/*  187 */ UINT64_C(0x19F0A88BF136D4D9),
/*  188 */ UINT64_C(0x9872CF6F3B0BF6F7),
/*  189 */ UINT64_C(0x59BEA750F6CDF717),
/*  190 */ UINT64_C(0xCA11669B5027E4D9),
/*  191 */ UINT64_C(0x1A7FA7DC53B3BE18),
/*  192 */ UINT64_C(0xDF50B8157C9F8F24),
/*  193 */ UINT64_C(0xE71BF0A80706E1B3),
/*  194 */ UINT64_C(0x7B38A1A658560B7E),
/*  195 */ UINT64_C(0x6806F1B1D44425BD),
/*  196 */ UINT64_C(0x8E13C026638A7D48),
/*  197 */ UINT64_C(0xA134087159ED2EC7),
/*  198 */ UINT64_C(0x2AF643A1049F3228),
/*  199 */ UINT64_C(0x6A3A9309FCB322C5),
/*  200 */ UINT64_C(0xE39C4ED8B10B773A),
/*  201 */ UINT64_C(0xD73D6E46E63B7904),
/*  202 */ UINT64_C(0xBC985E7012D11D65),
/*  203 */ UINT64_C(0xB353E01B840388C4),
/*  204 */ UINT64_C(0xD9CF1191E6795ED1),
/*  205 */ UINT64_C(0x8792383A876497CB),
/*  206 */ UINT64_C(0x53255D1692A4A4E3),
/*  207 */ UINT64_C(0xD7E5A2EB45596FAF),
/*  208 */ UINT64_C(0x02C36A356D9D81F4),
/*  209 */ UINT64_C(0xF5DF468BA38ECD28),
/*  210 */ UINT64_C(0x85DC229E527F6186),
/*  211 */ UINT64_C(0x4D29F51AA1769618),
/*  212 */ UINT64_C(0x334462C04AEC1C43),
/*  213 */ UINT64_C(0x5FA6772C8A036B60),
/*  214 */ UINT64_C(0x9EFEB752D5B5048F),
/*  215 */ UINT64_C(0x1030FE709F182273),
/*  216 */ UINT64_C(0x19D9673D2B1EFAB4),
/*  217 */ UINT64_C(0x79D3012C76412942),
/*  218 */ UINT64_C(0x01FB8D2A5F4457FA),
/*  219 */ UINT64_C(0xC92CE2AFE7A08D2F),
/*  220 */ UINT64_C(0x05B09BAE8C62A33F),
/*  221 */ UINT64_C(0x782877EA755D42AF),
/*  222 */ UINT64_C(0x8F8AD1922342E1EF),
/*  223 */ UINT64_C(0xD8D677B26C81C2E2),
/*  224 */ UINT64_C(0x553FCE0A94154028),
/*  225 */ UINT64_C(0x83EEA32377624C1F),
/*  226 */ UINT64_C(0xCE16FFA4460C1559),
/*  227 */ UINT64_C(0x14BE616586CD3C94),
/*  228 */ UINT64_C(0x5F4A02E88CF85B09),
/*  229 */ UINT64_C(0xE11E115D4A0F9B9E),
/*  230 */ UINT64_C(0x2DBA2E4B4FB642F4),
/*  231 */ UINT64_C(0x4170A29D1BBFE52C),
/*  232 */ UINT64_C(0x2D7AD8BE4E4F3E39),
/*  233 */ UINT64_C(0x138A2839A3BE5C2B),
/*  234 */ UINT64_C(0x3765418353AF5EE5),
/*  235 */ UINT64_C(0xE12279140E25AFAF),
/*  236 */ UINT64_C(0x727649D411904D78),
/*  237 */ UINT64_C(0x15D9E6F72A74BEC0),
/*  238 */ UINT64_C(0xAD0264194120B2D2),
/*  239 */ UINT64_C(0xCDD0F75292649174),
/*  240 */ UINT64_C(0x651738AECD952A37),
/*  241 */ UINT64_C(0xED16D36B9BE10C1E),
/*  242 */ UINT64_C(0xF8463B0869E5326B),
/*  243 */ UINT64_C(0x86C01864F878D6A5),
/*  244 */ UINT64_C(0xA1ABD1BABD856987),
/*  245 */ UINT64_C(0x744EE2DD12FEEF0B),
/*  246 */ UINT64_C(0xC809340BCA2372F0),
/*  247 */ UINT64_C(0xA2736EC0B8224750),
/*  248 */ UINT64_C(0xD2C17AEBE0A769DC),
/*  249 */ UINT64_C(0xC00E96CA73ABEAC1),
/*  250 */ UINT64_C(0x9914377C0ED5D706),
/*  251 */ UINT64_C(0xBB8B44CF51AA26FB),
/*  252 */ UINT64_C(0x1E0331AD4A2F5D9E),
/*  253 */ UINT64_C(0xEAEDCA93C12D9E45),
/*  254 */ UINT64_C(0x808F32D54508ECE2),
/*  255 */ UINT64_C(0xE476D12A2491CBAA),
};

const output_type f64_rounding_LUT_output[256] = {
/*    0 */ {UINT64_C(0x0000000000000000), UINT64_C(0x0000000000000000), UINT64_C(0x0000000000000000)},
/*    1 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*    2 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*    3 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x3FF0000000000000)},
/*    4 */ {UINT64_C(0x3FF0000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x3FF0000000000000)},
/*    5 */ {UINT64_C(0x4000000000000000), UINT64_C(0x4000000000000000), UINT64_C(0x4000000000000000)},
/*    6 */ {UINT64_C(0x7FEFFFFFFFFFFFFF), UINT64_C(0x7FEFFFFFFFFFFFFF), UINT64_C(0x7FEFFFFFFFFFFFFF)},
/*    7 */ {UINT64_C(0x7FF0000000000000), UINT64_C(0x7FF0000000000000), UINT64_C(0x7FF0000000000000)},
/*    8 */ {UINT64_C(0x7FF8000000000000), UINT64_C(0x7FF8000000000000), UINT64_C(0x7FF8000000000000)},
/*    9 */ {UINT64_C(0x7FFC000000000000), UINT64_C(0x7FFC000000000000), UINT64_C(0x7FFC000000000000)},
/*   10 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x3FF0000000000000)},
/*   11 */ {UINT64_C(0x3FF0000000000000), UINT64_C(0x4000000000000000), UINT64_C(0x3FF0000000000000)},
/*   12 */ {UINT64_C(0x4000000000000000), UINT64_C(0x4008000000000000), UINT64_C(0x4000000000000000)},
/*   13 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   14 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x3FF0000000000000)},
/*   15 */ {UINT64_C(0x3FF0000000000000), UINT64_C(0x4000000000000000), UINT64_C(0x4000000000000000)},
/*   16 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   17 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   18 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   19 */ {UINT64_C(0x7FEFFFFFFFFFFFFE), UINT64_C(0x7FEFFFFFFFFFFFFE), UINT64_C(0x7FEFFFFFFFFFFFFE)},
/*   20 */ {UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   21 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   22 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   23 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0xBFF0000000000000)},
/*   24 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0xBFF0000000000000), UINT64_C(0xBFF0000000000000)},
/*   25 */ {UINT64_C(0xC000000000000000), UINT64_C(0xC000000000000000), UINT64_C(0xC000000000000000)},
/*   26 */ {UINT64_C(0xFFEFFFFFFFFFFFFF), UINT64_C(0xFFEFFFFFFFFFFFFF), UINT64_C(0xFFEFFFFFFFFFFFFF)},
/*   27 */ {UINT64_C(0xFFF0000000000000), UINT64_C(0xFFF0000000000000), UINT64_C(0xFFF0000000000000)},
/*   28 */ {UINT64_C(0xFFF8000000000000), UINT64_C(0xFFF8000000000000), UINT64_C(0xFFF8000000000000)},
/*   29 */ {UINT64_C(0xFFFC000000000000), UINT64_C(0xFFFC000000000000), UINT64_C(0xFFFC000000000000)},
/*   30 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0xBFF0000000000000)},
/*   31 */ {UINT64_C(0xC000000000000000), UINT64_C(0xBFF0000000000000), UINT64_C(0xBFF0000000000000)},
/*   32 */ {UINT64_C(0xC008000000000000), UINT64_C(0xC000000000000000), UINT64_C(0xC000000000000000)},
/*   33 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   34 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0xBFF0000000000000)},
/*   35 */ {UINT64_C(0xC000000000000000), UINT64_C(0xBFF0000000000000), UINT64_C(0xC000000000000000)},
/*   36 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   37 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   38 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   39 */ {UINT64_C(0xFFEFFFFFFFFFFFFE), UINT64_C(0xFFEFFFFFFFFFFFFE), UINT64_C(0xFFEFFFFFFFFFFFFE)},
/*   40 */ {UINT64_C(0xD0C87940CF0DE5D0), UINT64_C(0xD0C87940CF0DE5D0), UINT64_C(0xD0C87940CF0DE5D0)},
/*   41 */ {UINT64_C(0x4C9A5933BED36A20), UINT64_C(0x4C9A5933BED36A20), UINT64_C(0x4C9A5933BED36A20)},
/*   42 */ {UINT64_C(0x64A559661437D3A9), UINT64_C(0x64A559661437D3A9), UINT64_C(0x64A559661437D3A9)},
/*   43 */ {UINT64_C(0x6EA153AC274F0972), UINT64_C(0x6EA153AC274F0972), UINT64_C(0x6EA153AC274F0972)},
/*   44 */ {UINT64_C(0x46FC5C3ADC1A4D11), UINT64_C(0x46FC5C3ADC1A4D11), UINT64_C(0x46FC5C3ADC1A4D11)},
/*   45 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   46 */ {UINT64_C(0xF595353A505577D8), UINT64_C(0xF595353A505577D8), UINT64_C(0xF595353A505577D8)},
/*   47 */ {UINT64_C(0x6B27D43F7C1E5587), UINT64_C(0x6B27D43F7C1E5587), UINT64_C(0x6B27D43F7C1E5587)},
/*   48 */ {UINT64_C(0xD6F4F0BA1F1840AF), UINT64_C(0xD6F4F0BA1F1840AF), UINT64_C(0xD6F4F0BA1F1840AF)},
/*   49 */ {UINT64_C(0xC2AC357BD0325600), UINT64_C(0xC2AC357BD0325400), UINT64_C(0xC2AC357BD0325600)},
/*   50 */ {UINT64_C(0x6098C20ABB428B55), UINT64_C(0x6098C20ABB428B55), UINT64_C(0x6098C20ABB428B55)},
/*   51 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   52 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   53 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   54 */ {UINT64_C(0x4A62743EE2FE2426), UINT64_C(0x4A62743EE2FE2426), UINT64_C(0x4A62743EE2FE2426)},
/*   55 */ {UINT64_C(0x57C0D3337DB5E936), UINT64_C(0x57C0D3337DB5E936), UINT64_C(0x57C0D3337DB5E936)},
/*   56 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   57 */ {UINT64_C(0x4C1AE0D0612EA2CF), UINT64_C(0x4C1AE0D0612EA2CF), UINT64_C(0x4C1AE0D0612EA2CF)},
/*   58 */ {UINT64_C(0x75B9664683BCD957), UINT64_C(0x75B9664683BCD957), UINT64_C(0x75B9664683BCD957)},
/*   59 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   60 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   61 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   62 */ {UINT64_C(0xFAD20B56FF1A7694), UINT64_C(0xFAD20B56FF1A7694), UINT64_C(0xFAD20B56FF1A7694)},
/*   63 */ {UINT64_C(0xC640AA01AD668217), UINT64_C(0xC640AA01AD668217), UINT64_C(0xC640AA01AD668217)},
/*   64 */ {UINT64_C(0xC40EAC0A6C802C7F), UINT64_C(0xC40EAC0A6C802C7F), UINT64_C(0xC40EAC0A6C802C7F)},
/*   65 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   66 */ {UINT64_C(0x70DBB7ACE86F7D73), UINT64_C(0x70DBB7ACE86F7D73), UINT64_C(0x70DBB7ACE86F7D73)},
/*   67 */ {UINT64_C(0xF6ECA664F9D337D3), UINT64_C(0xF6ECA664F9D337D3), UINT64_C(0xF6ECA664F9D337D3)},
/*   68 */ {UINT64_C(0x7559AF772B1EA14B), UINT64_C(0x7559AF772B1EA14B), UINT64_C(0x7559AF772B1EA14B)},
/*   69 */ {UINT64_C(0xFA7E0B6855266722), UINT64_C(0xFA7E0B6855266722), UINT64_C(0xFA7E0B6855266722)},
/*   70 */ {UINT64_C(0xC5E820997FF5F9FE), UINT64_C(0xC5E820997FF5F9FE), UINT64_C(0xC5E820997FF5F9FE)},
/*   71 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   72 */ {UINT64_C(0xDF88E095CB82D887), UINT64_C(0xDF88E095CB82D887), UINT64_C(0xDF88E095CB82D887)},
/*   73 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   74 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   75 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   76 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   77 */ {UINT64_C(0x4D864FBDC5D62799), UINT64_C(0x4D864FBDC5D62799), UINT64_C(0x4D864FBDC5D62799)},
/*   78 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   79 */ {UINT64_C(0xDC4E0C3589E23943), UINT64_C(0xDC4E0C3589E23943), UINT64_C(0xDC4E0C3589E23943)},
/*   80 */ {UINT64_C(0xF60CDFF2583E4F56), UINT64_C(0xF60CDFF2583E4F56), UINT64_C(0xF60CDFF2583E4F56)},
/*   81 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   82 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   83 */ {UINT64_C(0xE47C191DD9ABD2B9), UINT64_C(0xE47C191DD9ABD2B9), UINT64_C(0xE47C191DD9ABD2B9)},
/*   84 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   85 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   86 */ {UINT64_C(0xFAF53A1FCB881621), UINT64_C(0xFAF53A1FCB881621), UINT64_C(0xFAF53A1FCB881621)},
/*   87 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   88 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   89 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   90 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   91 */ {UINT64_C(0xD251AA1357A79EFD), UINT64_C(0xD251AA1357A79EFD), UINT64_C(0xD251AA1357A79EFD)},
/*   92 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   93 */ {UINT64_C(0xF6BCA0B80318E0EE), UINT64_C(0xF6BCA0B80318E0EE), UINT64_C(0xF6BCA0B80318E0EE)},
/*   94 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   95 */ {UINT64_C(0x685B7FF325241D2D), UINT64_C(0x685B7FF325241D2D), UINT64_C(0x685B7FF325241D2D)},
/*   96 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*   97 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*   98 */ {UINT64_C(0x5743A1B1586C755B), UINT64_C(0x5743A1B1586C755B), UINT64_C(0x5743A1B1586C755B)},
/*   99 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  100 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  101 */ {UINT64_C(0xC3089C6999411630), UINT64_C(0xC3089C6999411628), UINT64_C(0xC3089C6999411630)},
/*  102 */ {UINT64_C(0x4845B9A29F383FD1), UINT64_C(0x4845B9A29F383FD1), UINT64_C(0x4845B9A29F383FD1)},
/*  103 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  104 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  105 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  106 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  107 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  108 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  109 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  110 */ {UINT64_C(0x51FC0697496AA413), UINT64_C(0x51FC0697496AA413), UINT64_C(0x51FC0697496AA413)},
/*  111 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  112 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  113 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  114 */ {UINT64_C(0xC018000000000000), UINT64_C(0xC014000000000000), UINT64_C(0xC014000000000000)},
/*  115 */ {UINT64_C(0x6C396379563805C3), UINT64_C(0x6C396379563805C3), UINT64_C(0x6C396379563805C3)},
/*  116 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  117 */ {UINT64_C(0x71EA34900D11ABF7), UINT64_C(0x71EA34900D11ABF7), UINT64_C(0x71EA34900D11ABF7)},
/*  118 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  119 */ {UINT64_C(0xEF50FE22FB2107BE), UINT64_C(0xEF50FE22FB2107BE), UINT64_C(0xEF50FE22FB2107BE)},
/*  120 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  121 */ {UINT64_C(0x6511B6111805B141), UINT64_C(0x6511B6111805B141), UINT64_C(0x6511B6111805B141)},
/*  122 */ {UINT64_C(0x7A2E22F94F0FD6AD), UINT64_C(0x7A2E22F94F0FD6AD), UINT64_C(0x7A2E22F94F0FD6AD)},
/*  123 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  124 */ {UINT64_C(0x5AA92FB662EF6A6E), UINT64_C(0x5AA92FB662EF6A6E), UINT64_C(0x5AA92FB662EF6A6E)},
/*  125 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  126 */ {UINT64_C(0xFE47975236EEF967), UINT64_C(0xFE47975236EEF967), UINT64_C(0xFE47975236EEF967)},
/*  127 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  128 */ {UINT64_C(0x546A200B47C3D892), UINT64_C(0x546A200B47C3D892), UINT64_C(0x546A200B47C3D892)},
/*  129 */ {UINT64_C(0xC184B4B6C0000000), UINT64_C(0xC184B4B6B8000000), UINT64_C(0xC184B4B6B8000000)},
/*  130 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  131 */ {UINT64_C(0xF771317ED05D9D2C), UINT64_C(0xF771317ED05D9D2C), UINT64_C(0xF771317ED05D9D2C)},
/*  132 */ {UINT64_C(0xEEBD88C3BEDC7628), UINT64_C(0xEEBD88C3BEDC7628), UINT64_C(0xEEBD88C3BEDC7628)},
/*  133 */ {UINT64_C(0xE9DB65BD9D19D782), UINT64_C(0xE9DB65BD9D19D782), UINT64_C(0xE9DB65BD9D19D782)},
/*  134 */ {UINT64_C(0xFC07A68C7D252A0E), UINT64_C(0xFC07A68C7D252A0E), UINT64_C(0xFC07A68C7D252A0E)},
/*  135 */ {UINT64_C(0x6AD00C1DFD5BB379), UINT64_C(0x6AD00C1DFD5BB379), UINT64_C(0x6AD00C1DFD5BB379)},
/*  136 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  137 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  138 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  139 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  140 */ {UINT64_C(0x7E8F54B55F2D9D36), UINT64_C(0x7E8F54B55F2D9D36), UINT64_C(0x7E8F54B55F2D9D36)},
/*  141 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  142 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  143 */ {UINT64_C(0x5165A612C6399027), UINT64_C(0x5165A612C6399027), UINT64_C(0x5165A612C6399027)},
/*  144 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  145 */ {UINT64_C(0x4EEB7449299D8483), UINT64_C(0x4EEB7449299D8483), UINT64_C(0x4EEB7449299D8483)},
/*  146 */ {UINT64_C(0xDE7D361F747587E1), UINT64_C(0xDE7D361F747587E1), UINT64_C(0xDE7D361F747587E1)},
/*  147 */ {UINT64_C(0xF7A197EDE930040B), UINT64_C(0xF7A197EDE930040B), UINT64_C(0xF7A197EDE930040B)},
/*  148 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  149 */ {UINT64_C(0x50E588394EE84C9F), UINT64_C(0x50E588394EE84C9F), UINT64_C(0x50E588394EE84C9F)},
/*  150 */ {UINT64_C(0x6A72B63FAFD2BD6D), UINT64_C(0x6A72B63FAFD2BD6D), UINT64_C(0x6A72B63FAFD2BD6D)},
/*  151 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  152 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  153 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  154 */ {UINT64_C(0xDF3351C5D4096C6C), UINT64_C(0xDF3351C5D4096C6C), UINT64_C(0xDF3351C5D4096C6C)},
/*  155 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  156 */ {UINT64_C(0xEF1A0322D6A34552), UINT64_C(0xEF1A0322D6A34552), UINT64_C(0xEF1A0322D6A34552)},
/*  157 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  158 */ {UINT64_C(0xD16E16CF9B5C8899), UINT64_C(0xD16E16CF9B5C8899), UINT64_C(0xD16E16CF9B5C8899)},
/*  159 */ {UINT64_C(0xF90875CAA97A3D3F), UINT64_C(0xF90875CAA97A3D3F), UINT64_C(0xF90875CAA97A3D3F)},
/*  160 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  161 */ {UINT64_C(0xF871A489BEB596E6), UINT64_C(0xF871A489BEB596E6), UINT64_C(0xF871A489BEB596E6)},
/*  162 */ {UINT64_C(0x628D3CDBDA755FA7), UINT64_C(0x628D3CDBDA755FA7), UINT64_C(0x628D3CDBDA755FA7)},
/*  163 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  164 */ {UINT64_C(0x7F084AEF279ABF89), UINT64_C(0x7F084AEF279ABF89), UINT64_C(0x7F084AEF279ABF89)},
/*  165 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  166 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  167 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  168 */ {UINT64_C(0x5A69A7ADC5CA3EC5), UINT64_C(0x5A69A7ADC5CA3EC5), UINT64_C(0x5A69A7ADC5CA3EC5)},
/*  169 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  170 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  171 */ {UINT64_C(0x51D4C1E03CA6C7BC), UINT64_C(0x51D4C1E03CA6C7BC), UINT64_C(0x51D4C1E03CA6C7BC)},
/*  172 */ {UINT64_C(0x766BAC53DAD40FA4), UINT64_C(0x766BAC53DAD40FA4), UINT64_C(0x766BAC53DAD40FA4)},
/*  173 */ {UINT64_C(0xC45ADEF1BE481E12), UINT64_C(0xC45ADEF1BE481E12), UINT64_C(0xC45ADEF1BE481E12)},
/*  174 */ {UINT64_C(0x71B466974ABB37EB), UINT64_C(0x71B466974ABB37EB), UINT64_C(0x71B466974ABB37EB)},
/*  175 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  176 */ {UINT64_C(0x790552FDA3D5FBDD), UINT64_C(0x790552FDA3D5FBDD), UINT64_C(0x790552FDA3D5FBDD)},
/*  177 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  178 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  179 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  180 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  181 */ {UINT64_C(0xD472A7CDD9C35AB4), UINT64_C(0xD472A7CDD9C35AB4), UINT64_C(0xD472A7CDD9C35AB4)},
/*  182 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  183 */ {UINT64_C(0x54172A3CC373600C), UINT64_C(0x54172A3CC373600C), UINT64_C(0x54172A3CC373600C)},
/*  184 */ {UINT64_C(0xFC7FC2D1F337AF39), UINT64_C(0xFC7FC2D1F337AF39), UINT64_C(0xFC7FC2D1F337AF39)},
/*  185 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  186 */ {UINT64_C(0xF35B44E70ED160F8), UINT64_C(0xF35B44E70ED160F8), UINT64_C(0xF35B44E70ED160F8)},
/*  187 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  188 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  189 */ {UINT64_C(0x59BEA750F6CDF717), UINT64_C(0x59BEA750F6CDF717), UINT64_C(0x59BEA750F6CDF717)},
/*  190 */ {UINT64_C(0xCA11669B5027E4D9), UINT64_C(0xCA11669B5027E4D9), UINT64_C(0xCA11669B5027E4D9)},
/*  191 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  192 */ {UINT64_C(0xDF50B8157C9F8F24), UINT64_C(0xDF50B8157C9F8F24), UINT64_C(0xDF50B8157C9F8F24)},
/*  193 */ {UINT64_C(0xE71BF0A80706E1B3), UINT64_C(0xE71BF0A80706E1B3), UINT64_C(0xE71BF0A80706E1B3)},
/*  194 */ {UINT64_C(0x7B38A1A658560B7E), UINT64_C(0x7B38A1A658560B7E), UINT64_C(0x7B38A1A658560B7E)},
/*  195 */ {UINT64_C(0x6806F1B1D44425BD), UINT64_C(0x6806F1B1D44425BD), UINT64_C(0x6806F1B1D44425BD)},
/*  196 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  197 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  198 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  199 */ {UINT64_C(0x6A3A9309FCB322C5), UINT64_C(0x6A3A9309FCB322C5), UINT64_C(0x6A3A9309FCB322C5)},
/*  200 */ {UINT64_C(0xE39C4ED8B10B773A), UINT64_C(0xE39C4ED8B10B773A), UINT64_C(0xE39C4ED8B10B773A)},
/*  201 */ {UINT64_C(0xD73D6E46E63B7904), UINT64_C(0xD73D6E46E63B7904), UINT64_C(0xD73D6E46E63B7904)},
/*  202 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  203 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  204 */ {UINT64_C(0xD9CF1191E6795ED1), UINT64_C(0xD9CF1191E6795ED1), UINT64_C(0xD9CF1191E6795ED1)},
/*  205 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  206 */ {UINT64_C(0x53255D1692A4A4E3), UINT64_C(0x53255D1692A4A4E3), UINT64_C(0x53255D1692A4A4E3)},
/*  207 */ {UINT64_C(0xD7E5A2EB45596FAF), UINT64_C(0xD7E5A2EB45596FAF), UINT64_C(0xD7E5A2EB45596FAF)},
/*  208 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  209 */ {UINT64_C(0xF5DF468BA38ECD28), UINT64_C(0xF5DF468BA38ECD28), UINT64_C(0xF5DF468BA38ECD28)},
/*  210 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  211 */ {UINT64_C(0x4D29F51AA1769618), UINT64_C(0x4D29F51AA1769618), UINT64_C(0x4D29F51AA1769618)},
/*  212 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  213 */ {UINT64_C(0x5FA6772C8A036B60), UINT64_C(0x5FA6772C8A036B60), UINT64_C(0x5FA6772C8A036B60)},
/*  214 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  215 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  216 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  217 */ {UINT64_C(0x79D3012C76412942), UINT64_C(0x79D3012C76412942), UINT64_C(0x79D3012C76412942)},
/*  218 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  219 */ {UINT64_C(0xC92CE2AFE7A08D2F), UINT64_C(0xC92CE2AFE7A08D2F), UINT64_C(0xC92CE2AFE7A08D2F)},
/*  220 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  221 */ {UINT64_C(0x782877EA755D42AF), UINT64_C(0x782877EA755D42AF), UINT64_C(0x782877EA755D42AF)},
/*  222 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  223 */ {UINT64_C(0xD8D677B26C81C2E2), UINT64_C(0xD8D677B26C81C2E2), UINT64_C(0xD8D677B26C81C2E2)},
/*  224 */ {UINT64_C(0x553FCE0A94154028), UINT64_C(0x553FCE0A94154028), UINT64_C(0x553FCE0A94154028)},
/*  225 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  226 */ {UINT64_C(0xCE16FFA4460C1559), UINT64_C(0xCE16FFA4460C1559), UINT64_C(0xCE16FFA4460C1559)},
/*  227 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  228 */ {UINT64_C(0x5F4A02E88CF85B09), UINT64_C(0x5F4A02E88CF85B09), UINT64_C(0x5F4A02E88CF85B09)},
/*  229 */ {UINT64_C(0xE11E115D4A0F9B9E), UINT64_C(0xE11E115D4A0F9B9E), UINT64_C(0xE11E115D4A0F9B9E)},
/*  230 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  231 */ {UINT64_C(0x4170A29D10000000), UINT64_C(0x4170A29D20000000), UINT64_C(0x4170A29D20000000)},
/*  232 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  233 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  234 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  235 */ {UINT64_C(0xE12279140E25AFAF), UINT64_C(0xE12279140E25AFAF), UINT64_C(0xE12279140E25AFAF)},
/*  236 */ {UINT64_C(0x727649D411904D78), UINT64_C(0x727649D411904D78), UINT64_C(0x727649D411904D78)},
/*  237 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  238 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  239 */ {UINT64_C(0xCDD0F75292649174), UINT64_C(0xCDD0F75292649174), UINT64_C(0xCDD0F75292649174)},
/*  240 */ {UINT64_C(0x651738AECD952A37), UINT64_C(0x651738AECD952A37), UINT64_C(0x651738AECD952A37)},
/*  241 */ {UINT64_C(0xED16D36B9BE10C1E), UINT64_C(0xED16D36B9BE10C1E), UINT64_C(0xED16D36B9BE10C1E)},
/*  242 */ {UINT64_C(0xF8463B0869E5326B), UINT64_C(0xF8463B0869E5326B), UINT64_C(0xF8463B0869E5326B)},
/*  243 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  244 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  245 */ {UINT64_C(0x744EE2DD12FEEF0B), UINT64_C(0x744EE2DD12FEEF0B), UINT64_C(0x744EE2DD12FEEF0B)},
/*  246 */ {UINT64_C(0xC809340BCA2372F0), UINT64_C(0xC809340BCA2372F0), UINT64_C(0xC809340BCA2372F0)},
/*  247 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  248 */ {UINT64_C(0xD2C17AEBE0A769DC), UINT64_C(0xD2C17AEBE0A769DC), UINT64_C(0xD2C17AEBE0A769DC)},
/*  249 */ {UINT64_C(0xC010000000000000), UINT64_C(0xC008000000000000), UINT64_C(0xC010000000000000)},
/*  250 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  251 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  252 */ {UINT64_C(0x0000000000000000), UINT64_C(0x3FF0000000000000), UINT64_C(0x0000000000000000)},
/*  253 */ {UINT64_C(0xEAEDCA93C12D9E45), UINT64_C(0xEAEDCA93C12D9E45), UINT64_C(0xEAEDCA93C12D9E45)},
/*  254 */ {UINT64_C(0xBFF0000000000000), UINT64_C(0x8000000000000000), UINT64_C(0x8000000000000000)},
/*  255 */ {UINT64_C(0xE476D12A2491CBAA), UINT64_C(0xE476D12A2491CBAA), UINT64_C(0xE476D12A2491CBAA)},
};

#endif /* F64_ROUNDING_LUT_H */
