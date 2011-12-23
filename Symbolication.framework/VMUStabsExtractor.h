/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUStabsExtractor : VMUSymbolExtractor  {
}

+ (id)stabsExtractorWithMachOHeader:(id)arg1;
+ (id)symbolForAddress:(unsigned long long)arg1 withMachOHeader:(id)arg2;

- (id)initWithMachOHeader:(id)arg1 forAddress:(unsigned long long)arg2;
- (void)readIndirectSymbolsFromMachOHeader:(id)arg1 section:(id)arg2 nsyms:(unsigned int)arg3 indirectSymbols:(id)arg4 nlist:(id)arg5 stringTable:(id)arg6;
- (void)readStabsFromMachOHeader:(id)arg1 nsyms:(unsigned int)arg2 nlist:(id)arg3 stringTable:(id)arg4 forAddress:(unsigned long long)arg5;

@end
