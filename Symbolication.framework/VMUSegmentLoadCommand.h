/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;

@interface VMUSegmentLoadCommand : VMULoadCommand  {
    NSString *_name;
    unsigned long long _vmaddr;
    unsigned long long _vmsize;
    unsigned long long _fileoff;
    unsigned long long _filesize;
    int _maxprot;
    int _initprot;
    unsigned int _flags;
    NSArray *_sections;
}


- (unsigned long long)filesize;
- (int)maxprot;
- (int)initprot;
- (BOOL)isSegment;
- (unsigned long long)vmsize;
- (id)sectionNamed:(id)arg1;
- (unsigned long long)vmaddr;
- (unsigned long long)fileoff;
- (unsigned int)flags;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)sections;

@end
