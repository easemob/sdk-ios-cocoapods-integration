/*!
 @header EMSDKFull.h
 @abstract 客户端基本类
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

#import "EMSDKFullHeaders.h"

/*!
 @class
 @brief 该类包含了EaseMob和EMCallManager
 @discussion SDK集成进工程后, 最先使用的类, 所有的类对象, 均是通过这个单实例来获取, 示例代码如下:
 [EMSDKFull sharedInstance]
 */
@interface EMSDKFull : NSObject
{
    id<ICallManager> _callManager;
}

/*!
 @method
 @brief 获取单实例
 @discussion
 @result EMSDKFull实例对象
 */
+ (EMSDKFull *)sharedInstance;

/*!
 @property
 @brief 实时通信管理器, 实时语音、实时视频等操作
 */
@property (nonatomic, readonly, strong) id<ICallManager> callManager;

@end
