# YourPrjkt - 项目标题

![Project Banner](HeadImage.jpg)

一个融合了 GAS (Gameplay Ability System) 的简易动作游戏 DEMO，由 Unreal Engine 5.4 开发。

## 关于项目

`YourPrjkt` 是一个旨在学习和演示如何在 Unreal Engine 中使用 Game Animation Sample (GAS) 来创建复杂角色技能和属性系统的动作游戏原型，由[我](https://github.com/OneCuriousLearner)开发。

这个项目主要包含以下内容：

* 一个基础的战斗系统，包括角色移动、跳跃、攻击等基本动作。
* 角色状态管理，使用 GAS 来定义和触发技能。
* 简单的敌人 AI，用于控制敌人的行为。（开发中）
* 简短的剧情，便于了解世界观。（开发中）

项目的名字没有任何特殊意义，只是为了方便起见。

**主要技术栈:**

* Unreal Engine 5.4
* C++
* Game Animation Sample (GAS)
* Enhanced Input System
* To Be Continued...

---

## 开始使用

请按照以下步骤来设置和运行本项目。

### 先决条件

请确保您已安装以下软件：

* **Unreal Engine 5.4:** [下载虚幻引擎 - Unreal Engine](https://www.unrealengine.com/zh-CN/download)
* **Visual Studio 2022:** [Visual Studio 2022 IDE - 适用于软件开发人员的编程工具](https://visualstudio.microsoft.com/zh-hans/vs/)
  * 请确保安装了 "Game development with C++" 工作负载。
* **Git LFS:** [下载与安装指南](https://git-lfs.github.com/)
  * 本项目包含一些较大的资源文件，建议使用 Git LFS 进行管理。

### 安装步骤

1. **克隆仓库**

    ```sh
    git clone https://github.com/OneCuriousLearner/YourPrjkt.git
    cd YourPrjkt
    ```

2. **设置 Git LFS**

    ```sh
    git lfs install
    git lfs pull
    ```

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

<!-- 描述如何玩您的游戏或使用您的项目 -->
**游戏操作:**

* **移动:** W, A, S, D
* **跳跃:** 空格键
* **攻击:** 鼠标左键
* **技能1:** Q
* To Be Continued...

---

## 项目结构

为了保持项目的整洁和可维护性，我们遵循了一套目录结构规范。以下是 `Content` 目录下的主要文件夹及其用途：

```text
Content/
├─_Game/                            # 核心开发文件夹
│  ├─Action/                        # 交互资产
│  ├─AI/                            # AI 资产
│  ├─Animation/                     # 动作资产
│  │  ├─RamsterZ/                   # RamsterZ 动作资产
│  │  └─SwordAnim/                  # Sword Animation 动作资产
│  ├─Blueprint/                     # 蓝图资产
│  │  ├─Character/                  # 蓝图角色
│  │  ├─Component/                  # 蓝图组件
│  │  ├─InteractiveObject/          # 交互物品
│  │  └─Notify/                     # 通知蓝图
│  ├─Level/                         # 关卡
│  │  └─Test/                       # 测试关卡
│  ├─Material/                      # 材质
│  ├─Mesh/                          # 骨骼网格体（此文件夹已弃用）
│  ├─MMD/                           # MMD 资产文件夹
│  │  └─Characters/                 # MMD 角色
│  ├─Music/                         # 音乐
│  │  └─BackgroundMusic/            # 背景音乐
│  └─UI/                            # UI 资产
├─Audio/                            # 音频资源
├─Blueprints/                       # 蓝图资源
├─Cabin_Lake/                       # Cabin Lake 地图资产
├─Characters/                       # UE 小白人
│  ├─Mannequins/                    # UE5 小白人
│  ├─Mannequin_UE4/                 # UE4 小白人
│  └─UEFN_Mannequin/                # GAS 小黄人
├─Input/                            # 输入资源
├─LevelPrototyping/                 # GAS 关卡资产
├─RamsterZ_FreeAnims_Volume1/       # RamsterZ 动作资产
├─StarterContent/                   # 初学者内容包
├─Sword_Animation/                  # Sword Animation 动作资产
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

---

## 许可证

本项目采用 [MIT License](LICENSE) 开源许可证。

---

## 联系方式与致谢

### 联系方式

OneCuriousLearner - [j15112850518@163.com](mailto:j15112850518@163.com)
项目链接: [https://github.com/OneCuriousLearner/YourPrjkt](https://github.com/OneCuriousLearner/YourPrjkt)

### 致谢

* [最强大的实时3D创作工具 - Unreal Engine](https://www.unrealengine.com/zh-CN)
* [原子之音个人主页-哔哩哔哩视频](https://space.bilibili.com/437860379)
