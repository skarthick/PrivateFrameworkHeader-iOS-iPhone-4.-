/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate  {
    id _value;
    NSString *_transformFunction;
    int _comparison;
    BOOL _caseInsensitive;
    BOOL _treatNullAsBlank;
}

@property(readonly) NSString * operator;
@property(copy) NSString * transformFunction;
@property BOOL treatNullAsBlank;
@property BOOL caseInsensitive;
@property int comparison;
@property(retain) id value;

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(int)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 treatNullAsBlank:(BOOL)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;

- (id)value;
- (unsigned int)hash;
- (void)setValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsBlank:(BOOL)arg6;
- (id)operator;
- (void)setTransformFunction:(id)arg1;
- (void)setTreatNullAsBlank:(BOOL)arg1;
- (void)setCaseInsensitive:(BOOL)arg1;
- (void)setComparison:(int)arg1;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)transformFunction;
- (BOOL)treatNullAsBlank;
- (BOOL)caseInsensitive;
- (int)comparison;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;

@end
