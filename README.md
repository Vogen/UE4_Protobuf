How to use protobuf in Unreal Engine 4

1. Create new Unreal Engine 4 C++ project "MyProject" (engine version 4.26.2)

2. Create new module "Protobuf" in "Source"
2.1 new folder "Source/Protobuf"
2.2 new files "Protobuf.Build.cs", "Protobuf.h", "Protobuf.cpp"
2.3 Copy protobuf install files, build from source code (protobuf version 3.5)
2.4 add "Protobuf" to "MyProject.Build.cs"
2.5 remove "DefaultBuildSettings = BuildSettingsVersion.V2;" in "MyProject.Target.cs" and "MyProjectEditor.Target.cs"

3. Generate protobuf files
3.1 Move "*.protoc" in "Source/MyProject/Protoc"
3.2 run "Source/Protobuf/bin/protoc.exe <Source/MyProject/Protoc/*.protoc> --cpp_out Source/MyProject/Protoc/."
3.3 Now you have "*.pb.h" and "*.pb.cc"

4. Rebuild "MyProject"
4.1 Close Visual Studio
4.2 Generate project files
4.3 Build project