/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
    CPCharSequence *charSequence;
    struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x5; } *wordArray;
    unsigned int wordCount;

  /* Error parsing encoded ivar type info: ^{CPInlineContainer=I@"CPChunk"^{CPInlineContainer}} */
    struct CPInlineContainer { unsigned int x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; unsigned char x4; void*x5; unsigned char x6; void*x7; void*x8; in void*x9; void*x10; struct CPInlineContainer {} *x11; } *inlineList;

    int lineNumber;
    int columnNumber;
    float baseline;
    BOOL baseLineIsNull;
    BOOL hasBeenSplit;
    BOOL hasBeenProcessed;
    BOOL maySplit;
    BOOL hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    float minimumOffset;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    BOOL irregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    BOOL isListItem;
    unsigned int listSpacerIndex;
    BOOL lineBreakAfter;

  /* Error parsing encoded ivar type info: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@"CPFont"f^{CPPDFStyle}} */
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x12; unsigned char x13; void*x14; void*x15; out in void*x16; void*x17; float x18; struct CPPDFStyle {} *x19; } *uniformStyle;

    unsigned short uniformStyleFlags;
    float monospaceWidth;
    unsigned int *spacesBefore;
    BOOL disposed;
}

@property BOOL lineBreakAfter;
@property unsigned int listSpacerIndex;
@property BOOL isListItem;
@property unsigned int rightSpacerIndex;
@property unsigned int leftSpacerIndex;


- (void)dispose;
- (struct CGPoint { float x1; float x2; })anchor;
- (id)attributes;
- (void)finalize;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (int)align;
- (void)setBaseline:(float)arg1;
- (float)baseline;
- (id)properties;
- (BOOL)isListItem;
- (void)setLeftSpacerIndex:(unsigned int)arg1;
- (void)setIsListItem:(BOOL)arg1;
- (void)setListSpacerIndex:(unsigned int)arg1;
- (float)maximumWordGap;
- (BOOL)removeTextLines:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (unsigned int)rightSpacerIndex;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArray;
- (void)setCharSequence:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArrayOfSize:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfWordAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)firstWord;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)lastWord;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (BOOL)hasJustifiedAlignment;
- (BOOL)changesFontAt:(id)arg1;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (BOOL)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (void)setHasBeenSplit:(BOOL)arg1;
- (void)setHasBeenProcessed:(BOOL)arg1;
- (void)setColumnBreaks:(id)arg1;
- (void)setHasTabs:(BOOL)arg1;
- (void)setTabsBefore:(int)arg1;
- (int)baseLineAscending:(id)arg1;
- (int)baseLineDescending:(id)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (BOOL)overlapsHorizontally:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hyphenated;
- (void)setBaselineToNull;
- (void)recomputeBaseline;
- (BOOL)styleIsUniform:(struct CPPDFStyle {}**)arg1 styleFlags:(unsigned short)arg2;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (void)setLevels:(int)arg1;
- (void)recomputeLevels;
- (void)setMaximumLetterGap:(float)arg1;
- (void)setMaximumWordGap:(float)arg1;
- (void)setIrregular:(BOOL)arg1;
- (int)topIsAbove:(id)arg1;
- (float)medianFontSize;
- (void)setLineBreakAfter:(BOOL)arg1;
- (void)setRightSpacerIndex:(unsigned int)arg1;
- (BOOL)lineBreakAfter;
- (unsigned int)listSpacerIndex;
- (unsigned int)leftSpacerIndex;
- (BOOL)irregular;
- (int)tabsBefore;
- (float)maximumLetterGap;
- (int)levels;
- (id)columnBreaks;
- (BOOL)hasTabs;
- (BOOL)hasBeenProcessed;
- (BOOL)hasBeenSplit;
- (struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; }*)inlineList;
- (unsigned int)wordCount;
- (BOOL)isMonospaced;
- (unsigned int)inlineCount;
- (id)charSequence;
- (float)monospaceWidth;
- (BOOL)hasDropCap;
- (BOOL)isIndivisible;
- (void)accept:(id)arg1;
- (void)fitBoundsToChildren;
- (void)translateObjectYBy:(float)arg1;
- (long)zOrder;

@end
