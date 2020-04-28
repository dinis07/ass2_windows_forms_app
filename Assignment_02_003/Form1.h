#pragma once
#include "Tracks.h"
#include "EditTracks.h"

namespace Assignment_02_003 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Using NAudio library namespaces
	using namespace NAudio;
	using namespace NAudio::Wave;

	//Used for list class
	using namespace System::Collections::Generic;

	//Needed in the file read/write class
	using namespace System::IO;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}



	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}

			//if the output device is valid, stop any playback
			if (outputDevice != nullptr)
			{
				outputDevice->Stop();
			}

			//Restore the audioFileReader and outputDevice to null.
			audioFileReader = nullptr;
			outputDevice = nullptr;

			
		}

	
	//Decalring an object that containts data associated to an item
	private: System::Windows::Forms::ListViewItem^ listViewItem;

	//list of track structures (in Tracks.h header)
	private: List<Track^> playlist;

	//The index to tracks information
	private: int idxTrack;

	//outputDevice representing the device for audio playback
	private: IWavePlayer ^ outputDevice;

	//Reading audio files into memory (buffers)
	private: AudioFileReader ^ audioFileReader;
	
	//Refering to sepertate form, EditTraks
	private: Assignment_02_003::EditTracks editTracks;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  ofdOpenPlaylist;
	private: System::Windows::Forms::ListView^  lvTracks;
	private: System::Windows::Forms::ColumnHeader^  chArtist;
	private: System::Windows::Forms::ColumnHeader^  chTitle;
	private: System::Windows::Forms::ColumnHeader^  chAlbum;
	private: System::Windows::Forms::ColumnHeader^  chGenre;
	private: System::Windows::Forms::ColumnHeader^  chYear;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::Button^  btnStop;

	private: System::Windows::Forms::Button^  btnNextTrack;
	private: System::Windows::Forms::Button^  btnPrevTrack;
	private: System::Windows::Forms::Label^  lblNowPlaying;
	private: System::Windows::Forms::PictureBox^  picAlbum;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editTrackDetailsToolStripMenuItem;

	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  audioFileDirectoryToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  sfdSavePlaylist;
	private: System::Windows::Forms::TextBox^  txtImgDirectory;
	private: System::Windows::Forms::ColumnHeader^  chlvIndex;
	private: System::Windows::Forms::Label^  lblArtist;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  imageFileDirectoryToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtFilePath;
	private: System::Windows::Forms::Label^  lblTrackNo;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::Button^  btnAddTrack;













	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editTrackDetailsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->audioFileDirectoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageFileDirectoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofdOpenPlaylist = (gcnew System::Windows::Forms::OpenFileDialog());
			this->lvTracks = (gcnew System::Windows::Forms::ListView());
			this->chlvIndex = (gcnew System::Windows::Forms::ColumnHeader());
			this->chArtist = (gcnew System::Windows::Forms::ColumnHeader());
			this->chTitle = (gcnew System::Windows::Forms::ColumnHeader());
			this->chAlbum = (gcnew System::Windows::Forms::ColumnHeader());
			this->chGenre = (gcnew System::Windows::Forms::ColumnHeader());
			this->chYear = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->btnNextTrack = (gcnew System::Windows::Forms::Button());
			this->btnPrevTrack = (gcnew System::Windows::Forms::Button());
			this->lblNowPlaying = (gcnew System::Windows::Forms::Label());
			this->picAlbum = (gcnew System::Windows::Forms::PictureBox());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->sfdSavePlaylist = (gcnew System::Windows::Forms::SaveFileDialog());
			this->txtImgDirectory = (gcnew System::Windows::Forms::TextBox());
			this->lblArtist = (gcnew System::Windows::Forms::Label());
			this->txtFilePath = (gcnew System::Windows::Forms::TextBox());
			this->lblTrackNo = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAddTrack = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAlbum))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(534, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->toolStripSeparator2, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->toolStripSeparator1,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->newToolStripMenuItem->Text = L"New...";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(190, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Enabled = false;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->saveToolStripMenuItem->Text = L"&Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Enabled = false;
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->saveAsToolStripMenuItem->Text = L"S&ave as...";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(190, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editTrackDetailsToolStripMenuItem });
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"&Edit";
			// 
			// editTrackDetailsToolStripMenuItem
			// 
			this->editTrackDetailsToolStripMenuItem->Enabled = false;
			this->editTrackDetailsToolStripMenuItem->Name = L"editTrackDetailsToolStripMenuItem";
			this->editTrackDetailsToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->editTrackDetailsToolStripMenuItem->Text = L"Edit Track &Details";
			this->editTrackDetailsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::editTrackDetailsToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->audioFileDirectoryToolStripMenuItem,
					this->imageFileDirectoryToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"&View";
			// 
			// audioFileDirectoryToolStripMenuItem
			// 
			this->audioFileDirectoryToolStripMenuItem->CheckOnClick = true;
			this->audioFileDirectoryToolStripMenuItem->Name = L"audioFileDirectoryToolStripMenuItem";
			this->audioFileDirectoryToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->audioFileDirectoryToolStripMenuItem->Text = L"&Audio File Directory";
			this->audioFileDirectoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::audioFileDirectoryToolStripMenuItem_Click);
			// 
			// imageFileDirectoryToolStripMenuItem
			// 
			this->imageFileDirectoryToolStripMenuItem->CheckOnClick = true;
			this->imageFileDirectoryToolStripMenuItem->Name = L"imageFileDirectoryToolStripMenuItem";
			this->imageFileDirectoryToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->imageFileDirectoryToolStripMenuItem->Text = L"&Image File Directory";
			this->imageFileDirectoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::imageFileDirectoryToolStripMenuItem_Click);
			// 
			// ofdOpenPlaylist
			// 
			this->ofdOpenPlaylist->FileName = L"OpenFileDialog1";
			this->ofdOpenPlaylist->Filter = L"Playlist|*.play";
			// 
			// lvTracks
			// 
			this->lvTracks->Activation = System::Windows::Forms::ItemActivation::TwoClick;
			this->lvTracks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->lvTracks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->chlvIndex, this->chArtist,
					this->chTitle, this->chAlbum, this->chGenre, this->chYear
			});
			this->lvTracks->FullRowSelect = true;
			this->lvTracks->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvTracks->HideSelection = false;
			this->lvTracks->Location = System::Drawing::Point(12, 283);
			this->lvTracks->MultiSelect = false;
			this->lvTracks->Name = L"lvTracks";
			this->lvTracks->Size = System::Drawing::Size(510, 222);
			this->lvTracks->TabIndex = 19;
			this->lvTracks->UseCompatibleStateImageBehavior = false;
			this->lvTracks->View = System::Windows::Forms::View::Details;
			this->lvTracks->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Form1::lvTracks_ItemSelectionChanged);
			this->lvTracks->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::lvTracks_MouseDoubleClick);
			// 
			// chlvIndex
			// 
			this->chlvIndex->Text = L"No.";
			this->chlvIndex->Width = 30;
			// 
			// chArtist
			// 
			this->chArtist->Tag = L"";
			this->chArtist->Text = L"Artist";
			this->chArtist->Width = 100;
			// 
			// chTitle
			// 
			this->chTitle->Text = L"Title";
			this->chTitle->Width = 100;
			// 
			// chAlbum
			// 
			this->chAlbum->Text = L"Album";
			this->chAlbum->Width = 100;
			// 
			// chGenre
			// 
			this->chGenre->Text = L"Genre";
			this->chGenre->Width = 100;
			// 
			// chYear
			// 
			this->chYear->Text = L"Year";
			// 
			// btnPlay
			// 
			this->btnPlay->BackColor = System::Drawing::SystemColors::Control;
			this->btnPlay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPlay->Enabled = false;
			this->btnPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btnPlay->Location = System::Drawing::Point(50, 192);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(70, 28);
			this->btnPlay->TabIndex = 20;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = false;
			this->btnPlay->Click += gcnew System::EventHandler(this, &Form1::btnPlay_Click);
			// 
			// btnStop
			// 
			this->btnStop->BackColor = System::Drawing::SystemColors::Control;
			this->btnStop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnStop->Enabled = false;
			this->btnStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btnStop->Location = System::Drawing::Point(126, 192);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(70, 28);
			this->btnStop->TabIndex = 21;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = false;
			this->btnStop->Click += gcnew System::EventHandler(this, &Form1::btnStop_Click);
			// 
			// btnNextTrack
			// 
			this->btnNextTrack->BackColor = System::Drawing::SystemColors::Control;
			this->btnNextTrack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnNextTrack->Enabled = false;
			this->btnNextTrack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btnNextTrack->Location = System::Drawing::Point(202, 192);
			this->btnNextTrack->Name = L"btnNextTrack";
			this->btnNextTrack->Size = System::Drawing::Size(38, 28);
			this->btnNextTrack->TabIndex = 23;
			this->btnNextTrack->Text = L">";
			this->btnNextTrack->UseVisualStyleBackColor = false;
			this->btnNextTrack->Click += gcnew System::EventHandler(this, &Form1::btnNextTrack_Click);
			// 
			// btnPrevTrack
			// 
			this->btnPrevTrack->BackColor = System::Drawing::SystemColors::Control;
			this->btnPrevTrack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPrevTrack->Enabled = false;
			this->btnPrevTrack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->btnPrevTrack->Location = System::Drawing::Point(6, 192);
			this->btnPrevTrack->Name = L"btnPrevTrack";
			this->btnPrevTrack->Size = System::Drawing::Size(38, 28);
			this->btnPrevTrack->TabIndex = 24;
			this->btnPrevTrack->Text = L"<";
			this->btnPrevTrack->UseVisualStyleBackColor = false;
			this->btnPrevTrack->Click += gcnew System::EventHandler(this, &Form1::btnPrevTrack_Click);
			// 
			// lblNowPlaying
			// 
			this->lblNowPlaying->AutoSize = true;
			this->lblNowPlaying->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNowPlaying->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblNowPlaying->Location = System::Drawing::Point(72, 153);
			this->lblNowPlaying->Name = L"lblNowPlaying";
			this->lblNowPlaying->Size = System::Drawing::Size(12, 15);
			this->lblNowPlaying->TabIndex = 25;
			this->lblNowPlaying->Text = L"-";
			// 
			// picAlbum
			// 
			this->picAlbum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picAlbum->ImageLocation = L"..\\Images\\Initialimage.jpg";
			this->picAlbum->Location = System::Drawing::Point(58, 12);
			this->picAlbum->Name = L"picAlbum";
			this->picAlbum->Size = System::Drawing::Size(129, 129);
			this->picAlbum->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAlbum->TabIndex = 26;
			this->picAlbum->TabStop = false;
			// 
			// btnRemove
			// 
			this->btnRemove->BackColor = System::Drawing::SystemColors::Control;
			this->btnRemove->Enabled = false;
			this->btnRemove->Location = System::Drawing::Point(436, 250);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(86, 27);
			this->btnRemove->TabIndex = 28;
			this->btnRemove->Text = L"Remove";
			this->btnRemove->UseVisualStyleBackColor = false;
			this->btnRemove->Click += gcnew System::EventHandler(this, &Form1::btnRemove_Click);
			// 
			// sfdSavePlaylist
			// 
			this->sfdSavePlaylist->DefaultExt = L"playlist1";
			this->sfdSavePlaylist->Filter = L"Playlist|*.play";
			// 
			// txtImgDirectory
			// 
			this->txtImgDirectory->ForeColor = System::Drawing::SystemColors::Info;
			this->txtImgDirectory->Location = System::Drawing::Point(310, 509);
			this->txtImgDirectory->MaximumSize = System::Drawing::Size(207, 13);
			this->txtImgDirectory->Name = L"txtImgDirectory";
			this->txtImgDirectory->ReadOnly = true;
			this->txtImgDirectory->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtImgDirectory->Size = System::Drawing::Size(207, 20);
			this->txtImgDirectory->TabIndex = 37;
			this->txtImgDirectory->Visible = false;
			// 
			// lblArtist
			// 
			this->lblArtist->AutoSize = true;
			this->lblArtist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblArtist->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblArtist->Location = System::Drawing::Point(73, 173);
			this->lblArtist->Name = L"lblArtist";
			this->lblArtist->Size = System::Drawing::Size(10, 13);
			this->lblArtist->TabIndex = 38;
			this->lblArtist->Text = L"-";
			// 
			// txtFilePath
			// 
			this->txtFilePath->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->txtFilePath->Location = System::Drawing::Point(12, 509);
			this->txtFilePath->MaximumSize = System::Drawing::Size(347, 13);
			this->txtFilePath->Name = L"txtFilePath";
			this->txtFilePath->ReadOnly = true;
			this->txtFilePath->Size = System::Drawing::Size(203, 20);
			this->txtFilePath->TabIndex = 39;
			this->txtFilePath->Visible = false;
			// 
			// lblTrackNo
			// 
			this->lblTrackNo->AutoSize = true;
			this->lblTrackNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTrackNo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblTrackNo->Location = System::Drawing::Point(38, 153);
			this->lblTrackNo->Name = L"lblTrackNo";
			this->lblTrackNo->Size = System::Drawing::Size(14, 15);
			this->lblTrackNo->TabIndex = 40;
			this->lblTrackNo->Text = L" -";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->picAlbum);
			this->panel1->Controls->Add(this->lblTrackNo);
			this->panel1->Controls->Add(this->btnPlay);
			this->panel1->Controls->Add(this->btnStop);
			this->panel1->Controls->Add(this->lblArtist);
			this->panel1->Controls->Add(this->btnNextTrack);
			this->panel1->Controls->Add(this->btnPrevTrack);
			this->panel1->Controls->Add(this->lblNowPlaying);
			this->panel1->Location = System::Drawing::Point(141, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(248, 241);
			this->panel1->TabIndex = 41;
			// 
			// btnAddTrack
			// 
			this->btnAddTrack->BackColor = System::Drawing::SystemColors::Control;
			this->btnAddTrack->Enabled = false;
			this->btnAddTrack->Location = System::Drawing::Point(12, 250);
			this->btnAddTrack->Name = L"btnAddTrack";
			this->btnAddTrack->Size = System::Drawing::Size(86, 27);
			this->btnAddTrack->TabIndex = 27;
			this->btnAddTrack->Text = L"Add";
			this->btnAddTrack->UseVisualStyleBackColor = false;
			this->btnAddTrack->Click += gcnew System::EventHandler(this, &Form1::btnAddTrack_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->ClientSize = System::Drawing::Size(534, 533);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtFilePath);
			this->Controls->Add(this->txtImgDirectory);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAddTrack);
			this->Controls->Add(this->lvTracks);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(550, 572);
			this->MinimumSize = System::Drawing::Size(550, 572);
			this->Name = L"Form1";
			this->Text = L"Player";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAlbum))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//--------------------------------------------------------FUNCTIONS--------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

private: System::Void OpenPlaylist() {

	//Used to read the contents of a file, using the openfile dialog
	StreamReader^ playlistContents = File::OpenText(ofdOpenPlaylist->FileName);

	//Hold a single line from the file that was read
	String^ line;

	//Clearing any exisiting playlist content
	playlist.Clear();
	//Clearing any content in the the listView
	this->lvTracks->Items->Clear();

	//Resetting the index to the first element of the playlist
	idxTrack = 0;

	//Loops round, reading the selected file line by line whiles the line is not empty
	while ((line = playlistContents->ReadLine()) != nullptr)
	{
		//Using the tab to seperate between details for each track
		char dSeperator = '\t';

		//String array containing details for a given track
		array<String^>^ details;

		//Dividing the line read into strings, with the use of the tab charater to determine the split points
		details = line->Split(dSeperator);

		//Creating a new structure to hold the details of the track which was just read
		Track^ track = gcnew Track();

		//Declating each element of the 'details' array using the opened file
		track->Artist = details[0];
		track->Title = details[1];
		track->Album = details[2];
		track->Genre = details[3];
		track->Year = details[4];
		track->AudioDirectory = details[5];
		track->ImgDirectory = details[6];

		//Adding the track to the end of the list
		playlist.Add(track);
	}

	//closing the stream once finished
	playlistContents->Close();

	//looping round the size of the List 'playlist' 
	for (int i = 0; i < playlist.Count; i++)
	{
		//creating a new list item and adding subitems to each list item
		listViewItem = gcnew System::Windows::Forms::ListViewItem(System::Convert::ToString(i + 1));
		listViewItem->SubItems->Add(this->playlist[i]->Artist);
		listViewItem->SubItems->Add(this->playlist[i]->Title);
		listViewItem->SubItems->Add(this->playlist[i]->Album);
		listViewItem->SubItems->Add(this->playlist[i]->Genre);
		listViewItem->SubItems->Add(this->playlist[i]->Year);
		listViewItem->SubItems->Add(this->playlist[i]->AudioDirectory);
		listViewItem->SubItems->Add(this->playlist[i]->ImgDirectory);
		this->lvTracks->Items->Add(this->listViewItem);
	}
}   
private: System::Void StopAP(){
	
	if (audioFileReader == nullptr) return;

	//Checking if audio is playing or paused
	if(outputDevice->PlaybackState == PlaybackState::Paused || outputDevice->PlaybackState == PlaybackState::Playing)
	{
		//stop any audio
		outputDevice->Stop();
		
		//audioFileReader->Position = 0;
		idxTrack = 0;
		
	}

}
private: System::Void StartAP() {

	//Try read the location of the selected file
	audioFileReader = gcnew AudioFileReader(lvTracks->SelectedItems[0]->SubItems[6]->Text);

	//initialise the playback device with the audio data from the audio file reader
	outputDevice->Init(audioFileReader);

	//Start audio playback and change the play button text to pause
	outputDevice->Play();
}	
private: System::Void UpdateImgDirectory()
{
	//If the text field of the picture box is empty, then enter
	if (txtImgDirectory->Text == "")
	{
		//Set the picture size mode to zoom (fits the whole image), and finds the default image in a subfolder
		this->picAlbum->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->picAlbum->ImageLocation = L"..\\Images\\Initialimage.jpg";
	}
	else
	{
		//set the image to zoom, and use the image directory saved in the text file as the image direcorty
		this->picAlbum->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->picAlbum->ImageLocation = txtImgDirectory->Text;
	}

}
private: System::Void UpdateUI() {

	//checking if the playlist has at least one track. Enables buttons, and listview
	if (playlist.Count > 0)
	{
		btnPlay->Enabled = true;
		btnStop->Enabled = true;
		btnNextTrack->Enabled = true;
		btnPrevTrack->Enabled = true;
		lvTracks->Enabled = true;
		editToolStripMenuItem->Enabled = true;
		saveToolStripMenuItem->Enabled = true;
		saveAsToolStripMenuItem->Enabled = true;
	}

	//Check if the the seleceted item is larger than zero, then enables buttons if true, disables when false
	if (lvTracks->SelectedItems->Count > 0)
	{
		btnPlay->Enabled = true ;
		btnRemove->Enabled = true;
	}
	else
	{
		btnPlay->Enabled = false;
	}

	//if there is audio playing, change the play button to 'pause'
	if (outputDevice->PlaybackState == PlaybackState::Playing)
	{
		btnPlay->Text = "Pause";
	}

	//checks if the audio is stopped, and disables buttons if true
	if (outputDevice->PlaybackState == PlaybackState::Stopped)
	{
		btnStop->Enabled = false;
		btnPlay->Text = "Play";
		if (lvTracks->SelectedItems->Count > 0)
		{
			idxTrack = lvTracks->SelectedItems[0]->Index;
		}
	}
	if(lvTracks->SelectedItems->Count > 0)
	{
		//if index selected is equal to the number of tracks - 1, to disable next button as no info to select afterwards.
		if (lvTracks->SelectedItems[0]->Index == playlist.Count - 1)
		{
			btnNextTrack->Enabled = false;
		}
		else
		{
			btnNextTrack->Enabled = true;
		}

		//checks if the index selected (Playing/paused track index), is larger than zero. Enabeling Previous track button.
		if (lvTracks->SelectedItems[0]->Index > 0)
		{
			btnPrevTrack->Enabled = true;
			btnPlay->Enabled = true;
		}
		//else disables the button as there no information to go back on.
		else
		{
			btnPrevTrack->Enabled = false;
		}


	}
	if (Form1::Text == "Player")
	{
		btnAddTrack->Enabled = false;
	}
	else
	{
		btnAddTrack->Enabled = true;
	}
	//Calling function
	NowPlayingSelected();
	//Updates image
	UpdateImgDirectory();
}
private: System::Void NowPlayingSelected() {
	//changing the labels of the track to selected track items
	if (outputDevice->PlaybackState == PlaybackState::Playing)
	{
		lblTrackNo->Text = lvTracks->SelectedItems[0]->SubItems[0]->Text + "  -  ";
		lblNowPlaying->Text = lvTracks->SelectedItems[0]->SubItems[2]->Text;
		lblArtist->Text = lvTracks->SelectedItems[0]->SubItems[1]->Text;
		
		//changing the index of the playing/paused track to the selected track
		idxTrack = lvTracks->SelectedItems[0]->Index;
		this->lvTracks->Items[idxTrack]->Selected = true;
	}
	//if nothing is playing the no track number, name or artist is shown
	else
	{
		lblTrackNo->Text = " ";
		lblNowPlaying->Text = " - ";
		lblArtist->Text = "";
		txtFilePath->Text = " - ";
		txtFilePath->Text = " - ";
	}
	if (lvTracks->SelectedItems->Count > 0)
	{
		//...change the image text to the selected item
		txtImgDirectory->Text = lvTracks->SelectedItems[0]->SubItems[7]->Text;
		txtFilePath->Text = lvTracks->SelectedItems[0]->SubItems[6]->Text;
	}
	else
	{
		txtImgDirectory->Text = "";
		txtFilePath->Text = "";
	}
}
private: System::Void SavePlaylist() {

	//Writing contentes to the file specified from the OPEN file dialog, when file was opened
	StreamWriter^ sw = gcnew StreamWriter((ofdOpenPlaylist->FileName));

	//Loop through each line of text (each track) in the file ( the playlist)
	for each(Track^ track in playlist)
	{
		//Write out the details of the tracks, and seperate them with tabs.
		sw->WriteLine(track->Artist + "\t" + track->Title + "\t" + track->Album + "\t" + track->Genre + "\t" + track->Year + "\t" + track->AudioDirectory + "\t" + track->ImgDirectory);
	}
	//close the writer to save to disk
	sw->Close();
}

//------------------------------------------------------FORM EVENTS--------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	//Initialising the waveOut Device, ready for audio playback
	outputDevice = gcnew WaveOutEvent();
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	delete outputDevice;

	System::Windows::Forms::DialogResult result = MessageBox::Show("Would you like to save playlist?", "Save", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		SavePlaylist();
		return;
	}
	else
	{
		return;
	}

	//deleting the audio output
	
}


//---------------------------------------------FILE TOOLSTRIP MENU EVENTS--------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	//Show Dialog to browse for Audio Files
	System::Windows::Forms::DialogResult result = ofdOpenPlaylist->ShowDialog();

	//Checking dialog result
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		//Calling open function
		OpenPlaylist();

		//Updating
		UpdateUI();
	}
	//Change the name of the Form title to 'Audio Player: *file name*'
	Form1::Text = "Audio Player: " + Path::GetFileName(ofdOpenPlaylist->FileName);
	btnPrevTrack->Enabled = false;
	editTrackDetailsToolStripMenuItem->Enabled = true;
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	SavePlaylist();
	}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	//Checking if playlist has one or more items
	if (playlist.Count > 0)
	{	
		//Open save File Dialog
		System::Windows::Forms::DialogResult result = sfdSavePlaylist->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK)
		{
			//Writing contentes to the file specified from the SAVE file dialog
			StreamWriter^ sw = gcnew StreamWriter(sfdSavePlaylist->FileName);

			//Loop through each line of text (each track) in the file ( the playlist)
			for each(Track^ track in playlist)
			{
				//Write out the details of the tracks, and seperate them with tabs.
				sw->WriteLine(track->Artist + "\t" + track->Title + "\t" + track->Album + "\t" + track->Genre + "\t" + track->Year + "\t" + track->AudioDirectory + "\t" + track->ImgDirectory);
			}
			//close the writer to save to disk
			sw->Close();
		}
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
	//Exit the application
	Application::Exit();
	}


//---------------------------------------------EDIT TOOLSTRIP MENU EVENTS--------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

private: System::Void editTrackDetailsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	editTracks.ShowDialog();

	//When the Edit tracks form is closed, the playlist reloads with any edits to the track details
	OpenPlaylist();
}
private: System::Void audioFileDirectoryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	//check if the button is check
	if (audioFileDirectoryToolStripMenuItem->Checked)
	{
		//if checked view audio file Directrory
		txtFilePath->Visible = true;
	}
	else
	{
		//if checked hide audio file Directrory
		txtFilePath->Visible = false;
	}

}
private: System::Void imageFileDirectoryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//check if the button is check
	if (imageFileDirectoryToolStripMenuItem->Checked)
	{
		//if checked view image file Directrory
		txtImgDirectory->Visible = true;
	}
	else
	{
		//if checked hide image file Directrory
		txtImgDirectory->Visible = false;
	}
}
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	editTracks.ShowDialog();
}

//----------------------------------------------------LISTVIEW EVENTS------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

private: System::Void lvTracks_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
	

	if (lvTracks->SelectedItems->Count == 0)
	{
		btnRemove->Enabled = false;
	}
	if (outputDevice->PlaybackState == PlaybackState::Stopped && lvTracks->SelectedItems->Count == 0)
	{
		btnPlay->Enabled = false;
		UpdateImgDirectory();

	}
	//if there is no audio output and the number of items already  selected are more than 0...
	if (outputDevice->PlaybackState == PlaybackState::Stopped && lvTracks->SelectedItems->Count > 0)
	{
		//Calling function
		UpdateUI();

		//Setting the index to the selected item
		idxTrack = lvTracks->SelectedItems[0]->Index;
	}
	else
	{
		txtImgDirectory->Text = "";
		txtFilePath->Text = "";
	}
}
private: System::Void lvTracks_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	//if the audio is playing or paused, stop track
	if (outputDevice->PlaybackState == PlaybackState::Playing || outputDevice->PlaybackState == PlaybackState::Paused)
	{
		StopAP();
	}
	
	//Checks if the audio has stopped
	if (outputDevice->PlaybackState == PlaybackState::Stopped)
	{
		//...change the image text to the selected item
		txtImgDirectory->Text = lvTracks->SelectedItems[0]->SubItems[7]->Text;
		txtFilePath->Text = lvTracks->SelectedItems[0]->SubItems[6]->Text;
		
		//calling play function
		StartAP();
	}
	//calling update User Interface function
	UpdateUI();
}

//------------------------------------------------------BUTTON EVENTS-----------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {

	//Remove selected line from text using the index of the selected track
	playlist.RemoveAt(lvTracks->SelectedItems[0]->Index);

	//Removingt the selected item from the listiew
	lvTracks->SelectedItems[0]->Remove();

	UpdateUI();
	
}
private: System::Void btnAddTrack_Click(System::Object^  sender, System::EventArgs^  e) {

	//opening the edit playlist window.
	editTracks.ShowDialog();
	OpenPlaylist();

	}
private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {

	//if the button text read pause, pause the playback and change button text to play
	if (btnPlay->Text == "Pause")
	{
		outputDevice->Pause();
		btnPlay->Text = "Play";
	}

	// if the button text read play, play the playback and change button text to pause
	else if (outputDevice->PlaybackState == PlaybackState::Paused)
	{
		outputDevice->Play();
		btnPlay->Text = "Pause";
	}

	//if the there is not playback
	else if(outputDevice->PlaybackState == PlaybackState::Stopped)
	{
		//calling play function
		StartAP();
	}
	//Updating buttons
	UpdateUI();
}
private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {

	//Calling function to stop audio output
	StopAP();

	//Updating buttons
	UpdateUI();
}
private: System::Void btnNextTrack_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//Change track index by adding one (next track)
	idxTrack++;
	
	//chaning the selected track in the listview
	this->lvTracks->Items[idxTrack]->Selected = true;

	//checks if the sudio is playing or paused 
	if (outputDevice->PlaybackState == PlaybackState::Playing || outputDevice->PlaybackState == PlaybackState::Paused)
	{
		StopAP();
		StartAP();
	}

	//calling update button function
	UpdateUI();
}
private: System::Void btnPrevTrack_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//Change track index by adding one (next track)
	idxTrack--;

	//chaning the selected track in the listview
	this->lvTracks->Items[idxTrack]->Selected = true;

	//checks if the sudio is playing or paused 
	if (outputDevice->PlaybackState == PlaybackState::Playing || outputDevice->PlaybackState == PlaybackState::Paused)
	{
		StopAP();
		StartAP();
	}

	//calling update button function
	UpdateUI();
}
};
}