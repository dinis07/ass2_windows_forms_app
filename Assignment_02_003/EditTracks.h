#pragma once
#include "Tracks.h"

namespace Assignment_02_003 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Used for list class
	using namespace System::Collections::Generic;

	//Needed in the file read/write class
	using namespace System::IO;


	/// <summary>
	/// Summary for EditTracks
	/// </summary>
	public ref class EditTracks : public System::Windows::Forms::Form
	{


	public:
		EditTracks(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditTracks()
		{
			if (components)
			{
				delete components;
			}
		}
	//list of track structures (in Tracks.h header)
	private: List<Track^> playlist;

	//The index to tracks information
	private: int idxTrack;

	private: System::Windows::Forms::Label^  label6;
	protected:
	private: System::Windows::Forms::TextBox^  txtFileDir;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtYear;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtGenre;
	private: System::Windows::Forms::TextBox^  txtAlbum;
	private: System::Windows::Forms::TextBox^  txtTitle;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnPrev;
	private: System::Windows::Forms::TextBox^  txtArtist;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  ofdPlaylist;
	private: System::Windows::Forms::SaveFileDialog^  sfdSavePlaylist;
	private: System::Windows::Forms::Button^  btnFindTrack;
	private: System::Windows::Forms::OpenFileDialog^  ofdFindTrack;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;


	private: System::Windows::Forms::Button^  btnFindImg;
	private: System::Windows::Forms::PictureBox^  picAlbum;
	private: System::Windows::Forms::OpenFileDialog^  ofdOpenImage;
	private: System::Windows::Forms::TextBox^  txtImgDirectory;
	private: System::Windows::Forms::Button^  btnUpdatePlay;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Label^  lblTrackNo;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtFileDir = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtYear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtAlbum = (gcnew System::Windows::Forms::TextBox());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->txtArtist = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ofdPlaylist = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdSavePlaylist = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnFindTrack = (gcnew System::Windows::Forms::Button());
			this->ofdFindTrack = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnFindImg = (gcnew System::Windows::Forms::Button());
			this->picAlbum = (gcnew System::Windows::Forms::PictureBox());
			this->ofdOpenImage = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtImgDirectory = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdatePlay = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblTrackNo = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAlbum))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 16);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Audio File Directory";
			// 
			// txtFileDir
			// 
			this->txtFileDir->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtFileDir->Enabled = false;
			this->txtFileDir->Location = System::Drawing::Point(12, 42);
			this->txtFileDir->Name = L"txtFileDir";
			this->txtFileDir->ReadOnly = true;
			this->txtFileDir->Size = System::Drawing::Size(273, 13);
			this->txtFileDir->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Year";
			// 
			// txtYear
			// 
			this->txtYear->Enabled = false;
			this->txtYear->Location = System::Drawing::Point(60, 193);
			this->txtYear->Name = L"txtYear";
			this->txtYear->Size = System::Drawing::Size(225, 20);
			this->txtYear->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 16);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Genre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Album";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Title";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Artist";
			// 
			// txtGenre
			// 
			this->txtGenre->Enabled = false;
			this->txtGenre->Location = System::Drawing::Point(60, 167);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(225, 20);
			this->txtGenre->TabIndex = 5;
			// 
			// txtAlbum
			// 
			this->txtAlbum->Enabled = false;
			this->txtAlbum->Location = System::Drawing::Point(60, 141);
			this->txtAlbum->Name = L"txtAlbum";
			this->txtAlbum->Size = System::Drawing::Size(225, 20);
			this->txtAlbum->TabIndex = 4;
			// 
			// txtTitle
			// 
			this->txtTitle->Enabled = false;
			this->txtTitle->Location = System::Drawing::Point(60, 115);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(225, 20);
			this->txtTitle->TabIndex = 3;
			// 
			// btnNext
			// 
			this->btnNext->Enabled = false;
			this->btnNext->Location = System::Drawing::Point(207, 378);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(73, 28);
			this->btnNext->TabIndex = 11;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &EditTracks::btnNext_Click_1);
			// 
			// btnPrev
			// 
			this->btnPrev->Enabled = false;
			this->btnPrev->Location = System::Drawing::Point(29, 378);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(73, 28);
			this->btnPrev->TabIndex = 9;
			this->btnPrev->Text = L"Previous";
			this->btnPrev->UseVisualStyleBackColor = true;
			this->btnPrev->Click += gcnew System::EventHandler(this, &EditTracks::btnPrev_Click_1);
			// 
			// txtArtist
			// 
			this->txtArtist->Enabled = false;
			this->txtArtist->Location = System::Drawing::Point(60, 89);
			this->txtArtist->Name = L"txtArtist";
			this->txtArtist->Size = System::Drawing::Size(225, 20);
			this->txtArtist->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(314, 24);
			this->menuStrip1->TabIndex = 30;
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
			this->newToolStripMenuItem->Text = L"&New...";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTracks::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTracks::openToolStripMenuItem_Click);
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
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTracks::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Enabled = false;
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->saveAsToolStripMenuItem->Text = L"S&ave as...";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTracks::saveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(190, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->exitToolStripMenuItem->Text = L"&Close";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTracks::exitToolStripMenuItem_Click);
			// 
			// ofdPlaylist
			// 
			this->ofdPlaylist->Filter = L"Playlist|*.play";
			// 
			// sfdSavePlaylist
			// 
			this->sfdSavePlaylist->FileName = L"Playlist1";
			this->sfdSavePlaylist->Filter = L"PlayList|*.play";
			// 
			// btnFindTrack
			// 
			this->btnFindTrack->Enabled = false;
			this->btnFindTrack->Location = System::Drawing::Point(210, 60);
			this->btnFindTrack->Name = L"btnFindTrack";
			this->btnFindTrack->Size = System::Drawing::Size(75, 23);
			this->btnFindTrack->TabIndex = 1;
			this->btnFindTrack->Text = L"Find Audio";
			this->btnFindTrack->UseVisualStyleBackColor = true;
			this->btnFindTrack->Click += gcnew System::EventHandler(this, &EditTracks::btnFindTrack_Click);
			// 
			// ofdFindTrack
			// 
			this->ofdFindTrack->Filter = L"All Audio Files|*.wav; *.mp3;*.m4a|MP3|*.mp3|WAV|*.wav|MPEG 4|*.m4a";
			// 
			// btnFindImg
			// 
			this->btnFindImg->Enabled = false;
			this->btnFindImg->Location = System::Drawing::Point(210, 309);
			this->btnFindImg->Name = L"btnFindImg";
			this->btnFindImg->Size = System::Drawing::Size(68, 23);
			this->btnFindImg->TabIndex = 8;
			this->btnFindImg->Text = L"Find Image";
			this->btnFindImg->UseVisualStyleBackColor = true;
			this->btnFindImg->Click += gcnew System::EventHandler(this, &EditTracks::btnFindImg_Click);
			// 
			// picAlbum
			// 
			this->picAlbum->Enabled = false;
			this->picAlbum->ImageLocation = L"..\\Images\\Initialimage.jpg";
			this->picAlbum->Location = System::Drawing::Point(60, 219);
			this->picAlbum->Name = L"picAlbum";
			this->picAlbum->Size = System::Drawing::Size(113, 113);
			this->picAlbum->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAlbum->TabIndex = 35;
			this->picAlbum->TabStop = false;
			// 
			// ofdOpenImage
			// 
			this->ofdOpenImage->Filter = L"All Image Files|*.jpeg;*.jpg;*.png;*.gif|JPEG|*.jpeg|JPG|*.jpg|PNG|*.png|GIF|*.gi"
				L"f";
			// 
			// txtImgDirectory
			// 
			this->txtImgDirectory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtImgDirectory->Location = System::Drawing::Point(62, 338);
			this->txtImgDirectory->Name = L"txtImgDirectory";
			this->txtImgDirectory->ReadOnly = true;
			this->txtImgDirectory->Size = System::Drawing::Size(225, 13);
			this->txtImgDirectory->TabIndex = 36;
			// 
			// btnUpdatePlay
			// 
			this->btnUpdatePlay->Enabled = false;
			this->btnUpdatePlay->Location = System::Drawing::Point(108, 379);
			this->btnUpdatePlay->Name = L"btnUpdatePlay";
			this->btnUpdatePlay->Size = System::Drawing::Size(93, 27);
			this->btnUpdatePlay->TabIndex = 10;
			this->btnUpdatePlay->Text = L"Add To Playlist";
			this->btnUpdatePlay->UseVisualStyleBackColor = true;
			this->btnUpdatePlay->Click += gcnew System::EventHandler(this, &EditTracks::btnUpdatePlay_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Enabled = false;
			this->btnDelete->Location = System::Drawing::Point(210, 235);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(68, 22);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->Text = L"Delete Track";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &EditTracks::btnDelete_Click);
			// 
			// lblTrackNo
			// 
			this->lblTrackNo->AutoSize = true;
			this->lblTrackNo->Location = System::Drawing::Point(268, 219);
			this->lblTrackNo->Name = L"lblTrackNo";
			this->lblTrackNo->Size = System::Drawing::Size(10, 13);
			this->lblTrackNo->TabIndex = 39;
			this->lblTrackNo->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(203, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Track no. :";
			// 
			// EditTracks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 418);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblTrackNo);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdatePlay);
			this->Controls->Add(this->txtImgDirectory);
			this->Controls->Add(this->picAlbum);
			this->Controls->Add(this->btnFindImg);
			this->Controls->Add(this->btnFindTrack);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtFileDir);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtYear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtAlbum);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnPrev);
			this->Controls->Add(this->txtArtist);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"EditTracks";
			this->Text = L"Track Details";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EditTracks::EditTracks_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAlbum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//--------------------------------------------------------FUNCTIONS--------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//


	private: System::Void UpdateImgDirectory()
	{
		//If there is no image, set the default image and the size
		if (txtImgDirectory->Text == "")
		{
			this->picAlbum->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAlbum->ImageLocation = L"..\\Images\\Initialimage.jpg";
		}
	
		//otherwise set track image
		else
		{
			this->picAlbum->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAlbum->ImageLocation = txtImgDirectory->Text;
		}
	}
	private: System::Void ClearFields() {

		//clear all text fields
		txtArtist->Clear();
		txtTitle->Clear();
		txtAlbum->Clear();
		txtGenre->Clear();
		txtYear->Clear();
		txtFileDir->Clear();
		txtImgDirectory->Clear();
	}
	private: System::Void EditFields() {

		//change the text of the text fields to the text in the playlist file
		txtArtist->Text = playlist[idxTrack]->Artist;
		txtTitle->Text = playlist[idxTrack]->Title;
		txtAlbum->Text = playlist[idxTrack]->Album;
		txtGenre->Text = playlist[idxTrack]->Genre;
		txtYear->Text = playlist[idxTrack]->Year;
		txtFileDir->Text = playlist[idxTrack]->AudioDirectory;
		txtImgDirectory->Text = playlist[idxTrack]->ImgDirectory;
		lblTrackNo->Text = System::Convert::ToString(idxTrack + 1);
	}
	private: System::Void UpdateUI() {

		//check if the amount of tracks in playlist equals 0
		if (playlist.Count == 0)
		{
			//Disable the save buttons
			saveToolStripMenuItem->Enabled = false;
			saveAsToolStripMenuItem->Enabled = false;
		}

		//Enables the play buttons
		else
		{
			saveToolStripMenuItem->Enabled = true;
			saveAsToolStripMenuItem->Enabled = true;
		}

		//Checks if the amount of tracks in the playlist are equal to the track index (end of the playlist)
		if (playlist.Count == idxTrack)
		{
			//disables the Next and Delete buttons
			btnNext->Enabled = false;
			btnDelete->Enabled = false;
		
			//Changes the text of Update button to 'Add to playlist' from 'new track' and clears all text fields
			btnUpdatePlay->Text = L"Add To Playlist";
			ClearFields();
		}
		//if the amount of tracks in the playlist are not equal to the track index
		else
		{
			//Enable the next and delete button
			btnNext->Enabled = true;
			btnDelete->Enabled = true;

			//change fields to the track index details and change the update button to 'New Track'
			EditFields();
			btnUpdatePlay->Text = L"New Track";
		}
		// Checks if the track index is greater than 0 (not at the beggining of the playlist), enable previous button
		if (idxTrack > 0)
		{
			btnPrev->Enabled = true;
		}
		// Otherwise, disable it
		else
		{
			btnPrev->Enabled = false;
		}
		//Updat Images
		UpdateImgDirectory();
	}
	private: System::Void UpdateRecord()
	{
		//Check if the index of the track equals the size of the playlist
		if (idxTrack == playlist.Count)
		{
			//Creates a new track
			Track^ track = gcnew Track();

			//Sets all the 'Details' in the Tracks.h to the text in the field boxes
			track->Artist = txtArtist->Text;
			track->Title = txtTitle->Text;
			track->Album = txtAlbum->Text;
			track->Genre = txtGenre->Text;
			track->Year = txtYear->Text;
			track->AudioDirectory = txtFileDir->Text;
			track->ImgDirectory = txtImgDirectory->Text;
			lblTrackNo->Text = System::Convert::ToString(idxTrack);
		}

		//if the index does not match the size of the playlist then, check if the text boxes are not equaled to the text
		//in the playlist, then set the playlist text to the text of the textbox
		else {
			if (txtArtist->Text != playlist[idxTrack]->Artist)
			{
				playlist[idxTrack]->Artist = txtArtist->Text;
			}
			if (txtTitle->Text != playlist[idxTrack]->Title)
			{
				playlist[idxTrack]->Title = txtTitle->Text;
			}
			if (txtAlbum->Text != playlist[idxTrack]->Album)
			{
				playlist[idxTrack]->Album = txtAlbum->Text;
			}
			if (txtGenre->Text != playlist[idxTrack]->Genre)
			{
				playlist[idxTrack]->Genre = txtGenre->Text;
			}
			if (txtYear->Text != playlist[idxTrack]->Year)
			{
				playlist[idxTrack]->Year = txtYear->Text;
			}
			if (txtFileDir->Text != playlist[idxTrack]->AudioDirectory)
			{
				playlist[idxTrack]->AudioDirectory = txtFileDir->Text;
			}
			if (txtImgDirectory->Text != playlist[idxTrack]->ImgDirectory)
			{
				playlist[idxTrack]->ImgDirectory = txtImgDirectory->Text;
			}
		}

	}
	private: System::Void EnableFields() {

		//Enable the following buttons and text fields
		btnNext->Enabled = true;
		btnPrev->Enabled = true;
		btnFindTrack->Enabled = true;
		btnFindImg->Enabled = true;
		txtArtist->Enabled = true;
		txtTitle->Enabled = true;
		txtAlbum->Enabled = true;
		txtGenre->Enabled = true;
		txtYear->Enabled = true;
		txtFileDir->Enabled = true;
		picAlbum->Enabled = true;
	}
	private: System::Void SaveAsPlaylist() {
		//Prompt user to save choose file name and the location of the playlist
		System::Windows::Forms::DialogResult result = sfdSavePlaylist->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			//Writing contentes to the file specified from the SAVE file dialog
			StreamWriter^ sw = gcnew StreamWriter((sfdSavePlaylist->FileName));

			// Loop through each line of text(each track) in the file(the playlist)
			for each(Track^ track in playlist)
			{
				//Write out the details of the tracks, and seperate them with tabs.
				sw->WriteLine(track->Artist + "\t" + track->Title + "\t" + track->Album + "\t" + track->Genre + "\t" + track->Year + "\t" + track->AudioDirectory + "\t" + track->ImgDirectory);
			}
			//close the writer to save to disk
			sw->Close();

			EditTracks::Text = "Track Details: " + Path::GetFileName(sfdSavePlaylist->FileName);
		}
	}	
	private: System::Void SavePlaylist() {

		if (ofdPlaylist->FileName->Length > 0)
		{
			//Writing contentes to the file specified from the OPEN file dialog, when file was opened
			StreamWriter^ sw = gcnew StreamWriter((ofdPlaylist->FileName));

			//Loop through each line of text (each track) in the file ( the playlist)
			for each(Track^ track in playlist)
			{
				//Write out the details of the tracks, and seperate them with tabs.
				sw->WriteLine(track->Artist + "\t" + track->Title + "\t" + track->Album + "\t" + track->Genre + "\t" + track->Year + "\t" + track->AudioDirectory + "\t" + track->ImgDirectory);
			}
			//close the writer to save to disk
			sw->Close();
		}
		else
		{
			//Writing contentes to the file specified from the SAVE file dialog, when file was opened
			StreamWriter^ sw = gcnew StreamWriter((sfdSavePlaylist->FileName));

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
	private: System::Void NewPlaylist(){
	
		//Reset the index of the track back to 0
		idxTrack = 0;

		//Clear all contents of playlist
		playlist.Clear();

		//Change the form name to the default name
		EditTracks::Text = Path::GetFileName("Track Details");

		//Enable fields to add new tracks to the playlist
		EnableFields();

		//Update the Records, Image directory and the navigation buttons
		UpdateRecord();
		UpdateImgDirectory();
		UpdateUI();
	}

//------------------------------------------------------FORM EVENTS--------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

	private: System::Void EditTracks_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

		if ((EditTracks::Text == "Track Details" && lblTrackNo->Text != "0") && (EditTracks::Text == "Track Details" && lblTrackNo->Text != "-"))
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show("Would you like to save playlist?", "Save", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				SaveAsPlaylist();
				return;
			}
			else 
			{
				return;
			}
		}

		//Hide the form track details
		EditTracks::Hide();
	}

//---------------------------------------------- MENU TOOL STRIP EVENTS----------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

	//Event		:	Creat a new playlist
	private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		//Check if the Name of the form is not Track Details 
		if ((EditTracks::Text != "Track Details"))
		{
			//Prompt user to save exsisting playlist
			System::Windows::Forms::DialogResult result = MessageBox::Show("Would you like to save playlist before creating a new one?", "Save Playlist", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

			//If the resut is yes, save the playlist and clear playlist
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				SavePlaylist();
				NewPlaylist();
			}
			//If no, don't save and clear playlist
			else if (result == System::Windows::Forms::DialogResult::No)
			{
				NewPlaylist();
			}
			//make no changes
			else
			{
				return;
			}
			//Update User interface
			UpdateUI();

		}

		//create new plalist and enable the Update playlist button 
		NewPlaylist();
		btnUpdatePlay->Enabled = true;
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		//Show open file dialog and set the result to 'result'
		System::Windows::Forms::DialogResult result = ofdPlaylist->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK)
		{
			//Reads the contents of the file, where the file is specified by the ofen file dialog
			StreamReader^ playlistContents = File::OpenText(ofdPlaylist->FileName);

			//hold a single line from the file that was read
			String^ line;

			//clearing any exisiting playlist content
			playlist.Clear();

			//Resetting the index to the first element of the playlist
			idxTrack = 0;

			//Loops round, reading the selected file line by line whiles the line is not empty
			while ((line = playlistContents->ReadLine()) != nullptr)
			{
				//Using the tab to seperate between details for each track
				char deliminator = '\t';

				//String array containing details for a given track
				array<String^>^ details;

				//Dividing the line read into strings, with the use of the tab charater to determine the split points
				details = line->Split(deliminator);

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

			//checks if there are items in the playlist and enables fields
			if (playlist.Count > 0)
			{
				EnableFields();
			}

			//Updats the User interface, change the form name to the file name and enable the update button
			UpdateUI();
			EditTracks::Text = "Track Details: " + Path::GetFileName(ofdPlaylist->FileName);
			btnUpdatePlay->Enabled = true;
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		//Sets all the details of each track
		UpdateRecord();

		//Checks if the playlist is a new playlist
		if (EditTracks::Text == "Track Details")
		{
			//Open Save dialog
			SaveAsPlaylist();
		}
		else {

			//Save playlist
			SavePlaylist();
		}
	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		UpdateRecord();

		if (playlist.Count > 0)
		{
			System::Windows::Forms::DialogResult result = sfdSavePlaylist->ShowDialog();

			if (result == System::Windows::Forms::DialogResult::OK)
			{
				SaveAsPlaylist();
			}
		}
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	//hide the edit tracks form
	EditTracks::Hide();
	}


//--------------------------------------------------- BUTTON EVENTS--------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------------------//

	private: System::Void btnFindTrack_Click(System::Object^  sender, System::EventArgs^  e) {

		//Open file dialog and select a track
		System::Windows::Forms::DialogResult result = ofdFindTrack->ShowDialog();

		//Set the selected track to the file directory text box
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			txtFileDir->Text = ofdFindTrack->FileName;
		}
	}
	private: System::Void btnFindImg_Click(System::Object^  sender, System::EventArgs^  e) {

		//Open file dialog and select an image
		System::Windows::Forms::DialogResult result = ofdOpenImage->ShowDialog();

		//Set the selected image to the file directory text box and change the image to the selected image
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			txtImgDirectory->Text = ofdOpenImage->FileName;
			picAlbum->Image = Image::FromFile(txtImgDirectory->Text);
		}
	}
	private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//Prompt user if they're sure they would like to delete the track
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this track?", "Delete Track", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		//If yes, remove the track from the playlist by using its index and update the user interface
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			playlist.RemoveAt(idxTrack);
			UpdateUI();
		}
	}
	private: System::Void btnUpdatePlay_Click(System::Object^  sender, System::EventArgs^  e) {

		//If the the text of the button says New track, go to the end of the playlist
		if (btnUpdatePlay->Text == "New Track")
		{
			idxTrack = playlist.Count;
		}
		//otherwise
		else
		{
			//Ask the user to select an audio file if not selected
			if (txtFileDir->Text == "")
			{
				MessageBox::Show("Please choose an Audio File.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			//Ask the user to name the artist if there is not text
			else if (txtArtist->Text == "")
			{
				MessageBox::Show("Please insert the Artist name.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			//Ask the user to name the track, if there is no text in the title text box
			if (txtTitle->Text == "")
			{
				MessageBox::Show("Please insert the Title of the track.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			//If no description for the following feilds, fill it in with 'unknown'
			if (txtAlbum->Text == "")
			{
				txtAlbum->Text = "Unknown";
			}
			if (txtGenre->Text == "")
			{
				txtGenre->Text = "Unknown";
			}
			if (txtYear->Text == "")
			{
				txtYear->Text = "Unknown";
			}

			//create a new track and add it to the playlist
			Track^ track = gcnew Track();
			playlist.Add(track);
			UpdateRecord();
		}

		//update the user interface
		UpdateUI();
	}
	private: System::Void btnNext_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		//Update the record
		UpdateRecord();

		//Add '1' to the index (skip to the next track, or select next track if not playing)
		idxTrack++;

		//update user interface
		UpdateUI();
	}
	private: System::Void btnPrev_Click_1(System::Object^  sender, System::EventArgs^  e) {

		//Update the record
		UpdateRecord();

		//subtract '1' to the index (skip to the previous track, or select next track if not playing)
		idxTrack--;

		//update user interface
		UpdateUI();
	}
};
}
