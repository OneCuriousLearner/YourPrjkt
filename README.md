# YourPrjkt - 项目标题

![Project Banner](HeadImage.jpg)

一个融合了 GAS 的简易动作游戏 DEMO，由 Unreal Engine 5.4 开发。项目的名字是随便取的，游戏名字暂定为《潮蚀》（*Tide Eater*）。

## 声明

* 本项目仅用于学习和研究目的，不涉及任何商业用途，所有资源和代码均为学习和研究之用。
* 本项目不提供任何形式的付费支持或保证，也不对因使用本项目而导致的任何损失或损害承担责任。
* 本项目内所有音乐资产和内容均归原作者所有。如有侵权，请联系我进行删除。
* 本项目的动作资产 [Cool Sword Combat Animations V3](https://www.fab.com/zh-cn/listings/080e42da-cef1-4a94-b406-4711aceb6031) 并非免费资产，建议自行购买以规避可能的版权问题。

## 关于项目

`YourPrjkt` 是一个旨在学习和演示如何在 Unreal Engine 中使用 Motion Matching (Game Animation Sample Project) 来创建简单角色技能和属性系统的动作游戏原型，由 [我](https://github.com/OneCuriousLearner) 开发。

这个项目主要包含以下内容：

* 基于Motion Matching开发的的战斗系统，包括角色移动、跳跃、攻击等基本动作。（开发中）
* 使用 UMG 在适当时机显示当前生命值、体力值。
* 简单的敌人 AI，用于控制敌人的行为。（开发中）
* 简短的剧情，便于玩家了解世界观。（请参阅文档 `潮蚀 - 文案.md`）
* To Be Continued...

**主要技术栈:**

* Unreal Engine 5.4
* Blueprint, C++
* Motion Matching (Game Animation Sample Project)
* Enhanced Input System（增强输入系统）
* User Interface Blueprints (UMG)
* Combat System（战斗系统）
* Animation Montage（动画蒙太奇）
* Lens Language（镜头语言）
* To Be Continued...

### 游戏类型

这个游戏是一个​**​动作冒险游戏​**​，融合了​**​心理恐怖​**​和​**​叙事驱动​**​的元素。
具体来说，采用了动作游戏的核心机制（如战斗、移动），但通过探索、日记收集和环境叙事来营造悬疑和恐怖氛围，类似于心理惊悚类游戏。

### 游戏特点

1. ​**​动作战斗为核心​**​：游戏基于Unreal Engine 5.4开发，使用GAS实现角色技能，并拥有属性管理（生命值、体力值），强调实时战斗。
2. ​**​叙事驱动与恐怖氛围​**​：玩家在神秘岛屿上探索，逐步解锁日记和信件，揭示失忆主角的故事，涉及海洋祭祀、怪物和轮回主题；通过音乐设计和时间变化强化心理恐怖感。
3. ​**​探索与进度系统​**​：自由探索地图可解锁日记、提升属性并获得武器，通过环境线索推进剧情，最终以过场动画结束游戏。

总而言之，这是一个以动作为基础、恐怖叙事为导向的冒险游戏DEMO，强调氛围营造和玩家探索，同时利用先进引擎技术实现沉浸式体验。

---

## 开始使用

请按照以下步骤来设置和运行本项目。

### 先决条件

请确保为磁盘预留了足够的空间，详细情况请见下文。
请确保您已安装以下内容：

* **Unreal Engine 5.4**：
  * 预编译版本（不推荐）：[下载虚幻引擎 - Unreal Engine](https://www.unrealengine.com/zh-CN/download)（约 65 GB，需勾选“输入调试用符号”）
  * 源代码版本（推荐）：[Release Unreal Engine 5.4.4 · EpicGames/UnrealEngine](https://github.com/EpicGames/UnrealEngine/releases/tag/5.4.4-release)（约 200 GB）
    * 若无法访问源代码链接，请参阅此手册：[Downloading Source Code in Unreal Engine](https://dev.epicgames.com/documentation/en-us/unreal-engine/downloading-source-code-in-unreal-engine?application_version=5.4)
* **Visual Studio 2022**：[Visual Studio 2022 IDE - 适用于软件开发人员的编程工具](https://visualstudio.microsoft.com/zh-hans/vs/)
  * 请确保安装了 [需要的工作负载](https://dev.epicgames.com/documentation/zh-cn/unreal-engine/setting-up-visual-studio-development-environment-for-cplusplus-projects-in-unreal-engine?application_version=5.4)
  * 需要的存储空间：系统盘至少 20 GB，其他盘至少 30 GB。
* **Git LFS**：[下载与安装指南](https://git-lfs.github.com/)
  * 本项目包含一些较大的资源文件，建议使用 Git LFS 进行管理。

### 安装步骤

1. **克隆仓库**（需要先进入你的开发目录）

    ```sh
    git clone https://github.com/OneCuriousLearner/YourPrjkt.git
    cd YourPrjkt
    ```

    * 或者可以进入 [项目主页](https://github.com/OneCuriousLearner/YourPrjkt)，点击 `<> Code` - `Download ZIP` 下载压缩包（不建议，下载的资产可能被错误压缩）。

2. **设置 Git LFS**（用于跟踪大文件）

    ```sh
    git lfs install
    git lfs pull
    ```

    * 需要拥有 `GitHub Pro` 或 `GitHub Education Benefits` 等权益，以保证足够的LFS流量额度。

3. **生成 Visual Studio 项目文件**

    * 右键点击 `.uproject` 文件 (`YourPrjkt.uproject`)。
    * 选择 "Generate Visual Studio project files"。

4. **编译和运行**

    * 打开生成的 `.sln` 文件 (`YourPrjkt.sln`)。
    * 在 Visual Studio 中，将解决方案配置设置为 "Development Editor" 和 "Win64"。
    * 编译项目 (按 `Ctrl+Shift+B` 或 `F7`)。
    * 编译成功后，在 Unreal Editor 中打开项目并运行。

---

## 使用方法

**游戏操作:**

* **移动**：W, A, S, D
* **跳跃**：空格键
* **攻击**：鼠标左键
* **视角聚焦**：鼠标右键
* **视角切换**：鼠标中键
* **技能1**：Q
* To Be Continued...

---

## 项目结构

为了保持项目的整洁和可维护性，我遵循了一套目录结构规范。以下是 `Content` 目录下的主要文件夹及其用途：

```text
Content/
├─_Game/                            # 核心开发文件夹
│  ├─Action/                        # 交互资产
│  ├─AI/                            # AI 资产
│  ├─Animation/                     # 动作资产
│  ├─Blueprint/                     # 蓝图资产
│  ├─Level/                         # 关卡
│  ├─Material/                      # 材质
│  ├─Mesh/                          # 骨骼网格体（此文件夹已弃用）
│  ├─MMD/                           # MMD 资产文件夹
│  ├─Music/                         # 音乐
│  └─UI/                            # UI 资产
├─Audio/                            # 音频资源
├─Blueprints/                       # 蓝图资源
├─Cabin_Lake/                       # Cabin Lake 地图资产（来自 FAB 的免费资产）
├─Characters/                       # UE 小白人
│  ├─Mannequins/                    # UE5 小白人
│  ├─Mannequin_UE4/                 # UE4 小白人
│  └─UEFN_Mannequin/                # GAS 小黄人
├─CoolSwordCombatAnimsV3/           # 单手剑动画包（建议自行购买）
├─Input/                            # 输入资源
├─LevelPrototyping/                 # GAS 关卡资产
├─RamsterZ_FreeAnims_Volume1/       # RamsterZ 动作资产（来自 FAB 的免费资产）
├─StarterContent/                   # 初学者内容包
├─Sword_Animation/                  # Sword Animation 动作资产（来自 FAB 的免费资产）
├─ThirdPerson/                      # 默认第三人称项目内容
├─Weapon_Pack/                      # 武器资产包（来自 FAB 的免费资产）
└── ...
```

---

## 贡献指南

我们欢迎任何形式的贡献！如果您有任何建议或发现了 Bug，请通过以下方式参与进来：

1. Fork 本项目
2. 创建您的功能分支 (`git checkout -b feature/AmazingFeature`)
3. 提交您的更改 (`git commit -m 'Add some AmazingFeature'`)
4. Push 到您的分支 (`git push origin feature/AmazingFeature`)
5. 提交一个 Pull Request

或者使用 [GitHub Desktop](https://desktop.github.com/download/) 进行 [分支管理](https://dev.epicgames.com/documentation/zh-cn/unreal-engine/setting-up-visual-studio-development-environment-for-cplusplus-projects-in-unreal-engine?application_version=5.4)【推荐】。

---

## 许可证

本项目采用 [MIT License](LICENSE) 开源许可证。

---

## 联系方式与致谢

### 联系方式

* OneCuriousLearner - [j15112850518@163.com](mailto:j15112850518@163.com)
* 项目链接：[https://github.com/OneCuriousLearner/YourPrjkt](https://github.com/OneCuriousLearner/YourPrjkt)
* DeepWiki 文档 - [MCP_Agent:RE 系统概览 Wiki](https://github.com/OneCuriousLearner/YourPrjkt/wiki)

### 致谢

* [最强大的实时3D创作工具 - Unreal Engine](https://www.unrealengine.com/zh-CN)
* [pafuhana1213 / KawaiiPhysics](https://github.com/pafuhana1213/KawaiiPhysics)
* [ruyo / VRM4U](https://github.com/ruyo/VRM4U)
* [原子之音 - 哔哩哔哩](https://b23.tv/93nSsA1)
* [给你柠檬椰果养乐多你会跟我玩吗 - 哔哩哔哩](https://b23.tv/QYARVTX)
* [栗川彼方 - 哔哩哔哩](https://b23.tv/z0CKGOn)
* [爱格蛋总 - 哔哩哔哩](https://b23.tv/SPfrY41)
* [Clydiie - YouTube](https://www.youtube.com/@Clydiie)
* [Jonatan Isaksson - YouTube](https://www.youtube.com/@JonatanIsaksson/videos)
* [Zero2GameDev - YouTube](https://www.youtube.com/@Zero2GameDev0/videos)

这部分内容难以一一列出，详情请参阅文档 `特别鸣谢.md`
