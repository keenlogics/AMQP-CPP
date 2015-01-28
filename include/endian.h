#ifndef endian_h
#define endian_h

/*
    Diese Datei nicht wieder mit dem Original ersetzen.
*/

#include <QtEndian>

// define 16 bit macros
#define htobe16(x) qToBigEndian(x)
#define htole16(x) qToLittleEndian(x)
#define be16toh(x) qFromBigEndian(x)
#define le16toh(x) qFromLittleEndian(x)

// define 32 bit macros
#define htobe32(x) qToBigEndian(x)
#define htole32(x) qToLittleEndian(x)
#define be32toh(x) qFromBigEndian(x)
#define le32toh(x) qFromLittleEndian(x)

// define 64 but macros
#define htobe64(x) qToBigEndian(x)
#define htole64(x) qToLittleEndian(x)
#define be64toh(x) qFromBigEndian(x)
#define le64toh(x) qFromLittleEndian(x)

#endif // endian_h

