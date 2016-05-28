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
	//Total: 86 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//4. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//7. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//8. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//9. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//10. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//11. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//12. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//13. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//18. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//29. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//30. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//31. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//32. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//33. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//36. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//37. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//38. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//39. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//40. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//41. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//44. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//45. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//46. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//47. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//48. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//49. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//50. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//51. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//52. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//53. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

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

	//72. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//73. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//74. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//75. Flare
	void RegisterClass_Flare();
	RegisterClass_Flare();

	//76. LensFlare
	void RegisterClass_LensFlare();
	RegisterClass_LensFlare();

	//77. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//78. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//79. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//80. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//81. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//82. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//83. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//84. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//85. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
