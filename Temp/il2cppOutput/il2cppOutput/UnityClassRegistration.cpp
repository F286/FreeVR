struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UNET();
	RegisterModule_UNET();

}

void RegisterAllClasses()
{
	//Total: 87 classes
	//0. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//7. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//8. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//9. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//10. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//11. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//12. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//13. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//14. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//15. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//16. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//17. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//18. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//19. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//20. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//21. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//22. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//23. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//24. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//25. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//26. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//27. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//28. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//29. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//30. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//31. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//32. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//33. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//34. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//35. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//36. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//37. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//38. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//39. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//40. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//41. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//42. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//45. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//46. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//47. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//48. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//49. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//50. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//51. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//52. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//53. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//54. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//55. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//56. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//57. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//58. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//59. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//60. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//61. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//62. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//63. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//64. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//65. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//66. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//67. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//68. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//69. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//70. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//71. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//72. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//73. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//74. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//75. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//76. Flare
	void RegisterClass_Flare();
	RegisterClass_Flare();

	//77. LensFlare
	void RegisterClass_LensFlare();
	RegisterClass_LensFlare();

	//78. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//79. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//80. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//81. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//82. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//83. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//84. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//85. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
