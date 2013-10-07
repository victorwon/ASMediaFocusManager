Pod::Spec.new do |s|
  s.name = "ASMediaFocusManager"
  s.version = "0.2"
  s.license = 'MIT'
  s.summary = "Animate your iOS image views to fullscreen on a simple tap."
  s.authors = { "Philippe Converset" => "pconverset@autresphere.com" }
  s.homepage = "https://github.com/victorwon/ASMediaFocusManager"
  s.source = { :git => "https://github.com/victorwon/ASMediaFocusManager.git", :tag => "0.2" }
  s.platform = :ios, '6.0'
  s.source_files = 'ASMediaFocusManager/*'
  s.frameworks = 'UIKit', 'Foundation', 'CoreGraphics'
  s.requires_arc = true
end
