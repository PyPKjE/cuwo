#ifndef TERRAINGEN_API
#define TERRAINGEN_API

struct ChunkEntry
{
    unsigned char r, g, b, a;
};

struct ChunkXY
{
    int a, b;
    unsigned int size;
    ChunkEntry * items;
};

struct ChunkData
{
    int x, y;
    ChunkXY items[256*256];
};

void tgen_init();
void tgen_set_seed(unsigned int seed);
void tgen_set_path(const char * path);
ChunkData * tgen_generate_chunk(unsigned int x, unsigned int y);
void tgen_destroy_chunk(ChunkData * data);

#endif // TERRAINGEN_API
