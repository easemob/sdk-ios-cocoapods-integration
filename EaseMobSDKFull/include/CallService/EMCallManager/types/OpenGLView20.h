//
//  OpenGLView20.h
//  MyTest
//
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#import <OpenGLES/EAGL.h>
#include <sys/time.h>
#import <errno.h>

@interface OpenGLView20 : UIView
{
	/** 
	 OpenGL绘图上下文
	 */
    EAGLContext             *_glContext; 
	
	/** 
	 帧缓冲区
	 */
    GLuint                  _framebuffer; 
	
	/** 
	 渲染缓冲区
	 */
    GLuint                  _renderBuffer; 
	
	/** 
	 着色器句柄
	 */
    GLuint                  _program;  
	
	/** 
	 YUV纹理数组
	 */
    GLuint                  _textureYUV[3]; 
	
	/** 
	 视频宽度
	 */
    GLuint                  _videoW;  
	
	/** 
	 视频高度
	 */
    GLuint                  _videoH;
    
    //屏幕分辨率
    GLsizei                 _screenScale;
    
#ifdef DEBUG
    struct timeval      _time;
    NSInteger           _frameRate;
#endif
}

//目前只支持AVCaptureSessionPreset352x288和AVCaptureSessionPreset640x480
@property (strong, nonatomic) NSString *sessionPreset;

#pragma mark - 接口

- (void)displayYUV420pData:(char *)data width:(GLuint)w height:(GLuint)h;

- (void)setVideoSize:(GLuint)width height:(GLuint)height;

/** 
 清除画面
 */
- (void)clearFrame;

@end
