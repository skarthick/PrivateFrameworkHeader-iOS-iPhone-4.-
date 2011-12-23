/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDySymTabLoadCommand : VMULoadCommand  {
    unsigned int _ilocalsym;
    unsigned int _nlocalsym;
    unsigned int _iextdefsym;
    unsigned int _nextdefsym;
    unsigned int _iundefsym;
    unsigned int _nundefsym;
    unsigned int _tocoff;
    unsigned int _ntoc;
    unsigned int _modtaboff;
    unsigned int _nmodtab;
    unsigned int _extrefsymoff;
    unsigned int _nextrefsyms;
    unsigned int _indirectsymoff;
    unsigned int _nindirectsyms;
    unsigned int _extreloff;
    unsigned int _nextrel;
    unsigned int _locreloff;
    unsigned int _nlocrel;
}


- (id)initWithMemory:(id)arg1;
- (BOOL)isDySymTab;
- (unsigned int)indirectsymoff;
- (unsigned int)nindirectsyms;

@end
