
#ifndef EC_MITM_H
#define EC_MITM_H


struct mitm_method {
   char * name;
   void (*start)(void);
   void (*stop)(void);
};


/* exported functions */

extern void mitm_add(struct mitm_method *mm);
extern int mitm_set(u_char *name);
extern void mitm_start(void);
extern void mitm_stop(void);

#endif

/* EOF */

// vim:ts=3:expandtab

