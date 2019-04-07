typedef enum { typeCon, typeId, typeOpr } nodeEnum;


typedef struct {
    int value;                  
} conNodeType;


typedef struct {
    int i;                     
} idNodeType;


typedef struct {
    int oper;                   
    int nops;                   /* kac tane operand var */
    struct nodeTypeTag *op[1];	/* operands, extended at runtime */
} oprNodeType;

typedef struct nodeTypeTag {
    nodeEnum type;              /* <<< nodun tipi */

    union {
        conNodeType con;        /* sabitler */
        idNodeType id;          /* identifiers */
        oprNodeType opr;        /* operators */
    };
} nodeType;

extern int sym[26];
