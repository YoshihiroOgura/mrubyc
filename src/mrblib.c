/* dumped in big endian order.
   use `mrbc -e` option for better performance on little endian CPU. */
#include <stdint.h>
extern const uint8_t mrblib_bytecode[];
const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
mrblib_bytecode[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x34,0xcc,0xf2,0x00,0x00,0x00,0x66,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x00,0x48,0x30,0x30,
0x30,0x30,0x00,0x00,0x00,0x40,0x00,0x01,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x04,
0x00,0x80,0x00,0x06,0x01,0x00,0x00,0x3d,0x00,0x80,0x00,0xa0,0x00,0x00,0x00,0x4a,
0x00,0x00,0x00,0x01,0x00,0x00,0x0c,0x54,0x65,0x73,0x74,0x20,0x50,0x72,0x69,0x67,
0x72,0x61,0x6d,0x00,0x00,0x00,0x01,0x00,0x04,0x70,0x75,0x74,0x73,0x00,0x45,0x4e,
0x44,0x00,0x00,0x00,0x00,0x08,
};
