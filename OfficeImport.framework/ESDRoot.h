/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray;

@interface ESDRoot : ESDObject  {
    NSMutableArray *mChildren;
}


- (unsigned int)childCount;
- (id)init;
- (void)dealloc;
- (id)pbReferenceWithID:(unsigned long)arg1;
- (id)childAt:(unsigned int)arg1;
- (id)pbInitWithState:(id)arg1;
- (id)initFromReader:(struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)arg1;
- (struct EshRoot { int (**x1)(); unsigned short x2; struct ChVector<EshHeader*> { struct EshHeader {} **x_3_1_1; struct EshHeader {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)eshRoot;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (void)addChild:(id)arg1;

@end
