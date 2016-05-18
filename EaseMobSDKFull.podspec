Pod::Spec.new do |spec|
  spec.name         = 'EaseMobSDKFull'
  spec.version      = '2.2.5'
  spec.license      = 'MIT'
  spec.summary      = 'An Objective-C client for IM and Real-time voice service'
  spec.homepage     = 'http://www.easemob.com'
  spec.author       = {'EaseMob Inc.' => 'admin@easemob.com'}
  spec.source       =  {:git => 'https://github.com/easemob/sdk-ios-cocoapods-integration.git', :tag => spec.version.to_s }
  spec.source_files = "EaseMobSDKFull/**/*.{h}"
  spec.platform     = :ios, '6.0'
  spec.requires_arc = true
  spec.frameworks   = 'Foundation', 'CoreLocation', 'Security', 'MobileCoreServices',  'SystemConfiguration', 'CFNetwork', 'CoreGraphics', 'CoreData', 'AVFoundation', 'CoreMedia', 'MediaPlayer', 'OpenGLES'
  spec.libraries    = 'iconv', 'xml2', 'z', 'resolv', 'stdc++', 'sqlite3', 'stdc++.6.0.9', 'stdc++.6'
  spec.documentation_url = 'http://www.easemob.com/docs/ios/IOSSDKInit/'
  spec.resource     = 'EaseMobSDKFull/resources/EaseMob.bundle'
  spec.vendored_libraries = ['EaseMobSDKFull/lib/libEaseMobClientSDK_armv7.a',
                             'EaseMobSDKFull/lib/libEaseMobClientSDK_armv7s.a',
                             'EaseMobSDKFull/lib/libEaseMobClientSDK_arm64.a',
                             'EaseMobSDKFull/lib/libEaseMobClientSDK_i386.a',
                             'EaseMobSDKFull/lib/libEaseMobClientSDK_x86_64.a']
  spec.xcconfig     = {'OTHER_LDFLAGS' => '-ObjC'}
end
