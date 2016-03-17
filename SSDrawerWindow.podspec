Pod::Spec.new do |s|
  s.name = "SSDrawerWindow"
  s.version = "1.0.0"
  s.summary = "UIWindow subclass that provides an accessible side drawer."
  s.description = <<-DESC
    SSDrawerWindow extends UIWindow allowing it to attach a second arbitrary view controller as a drawer. Animation and depth options are completely customizable and an optional knob/button view is also provided as a simple user interface.
    DESC
  s.author = { "Symbiotic Software" => "marc@symbioticsoftware.com" }
  s.social_media_url = "http://twitter.com/symbioticsoftwr"
  s.homepage = "http://symbioticsoftware.com"
  s.license = { :type => "BSD", :file => "LICENSE" }
  s.platform = :ios, "4.3"
  s.source = { :git => "https://github.com/mvx24/iOS-SSDrawerWindow.git", :tag => "1.0.0" }
  s.source_files = "*.{h,m}"
  s.requires_arc = false
end
