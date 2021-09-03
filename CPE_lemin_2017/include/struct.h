#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct stc_s {
	int start;
	int end;
} stc_t;

typedef struct elem_s {
	int *pos;
	int room;

	struct elem_s *next;
} elem_t;

typedef struct obj_s {
	int *pos;
	int room;

	struct obs_s *prev;
	struct obs_s *next;
} obj_t;

#endif
