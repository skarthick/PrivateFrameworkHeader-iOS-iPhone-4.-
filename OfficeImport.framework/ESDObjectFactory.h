/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ESDObjectFactory : NSObject  {
}

+ (void)setEshFactory:(struct EshObjectFactory { int (**x1)(); boolx2; }*)arg1;
+ (void)replaceHostEshFactoryWith:(struct EshObjectFactory { int (**x1)(); boolx2; }*)arg1;
+ (void)restoreHostEshFactory;
+ (struct EshObject { }*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2;
+ (struct EshObject { }*)createObjectWithType:(unsigned short)arg1;


@end
