#pragma once
#include "ruinas_machupichu.h"

namespace machupichu {

	//int contOrden = 0;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de ingresar
	/// </summary>
	public ref class ingresar : public System::Windows::Forms::Form
	{
		//int contOrden = 0;

	public:
		ingresar(void)
		{
			InitializeComponent();
			//StreamWriter^ archivo_inicio = gcnew StreamWriter("machupichu_ingreso.txt", "a+");
			contadorOrden();
			//3
			//contador();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ingresar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_telefono;
	private: System::Windows::Forms::TextBox^ txt_direccion;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_marca;

	private: System::Windows::Forms::TextBox^ txt_tipo;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_estado;

	private: System::Windows::Forms::TextBox^ txt_accesorios;

	private: System::Windows::Forms::TextBox^ txt_serie;

	private: System::Windows::Forms::TextBox^ txt_modelo;
	private: System::Windows::Forms::TextBox^ txt_tectel;


	private: System::Windows::Forms::TextBox^ txt_tecnico;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label23;


	private: System::Windows::Forms::Label^ lbl_orden;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ingresar::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->txt_tectel = (gcnew System::Windows::Forms::TextBox());
			this->txt_tecnico = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_orden = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_telefono = (gcnew System::Windows::Forms::TextBox());
			this->txt_direccion = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_estado = (gcnew System::Windows::Forms::TextBox());
			this->txt_accesorios = (gcnew System::Windows::Forms::TextBox());
			this->txt_serie = (gcnew System::Windows::Forms::TextBox());
			this->txt_modelo = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_tipo = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->btn_guardar);
			this->panel1->Controls->Add(this->txt_tectel);
			this->panel1->Controls->Add(this->txt_tecnico);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Location = System::Drawing::Point(0, 331);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(860, 106);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(718, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 30);
			this->button1->TabIndex = 25;
			this->button1->Text = L"GUARDAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ingresar::button1_Click);
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(323, 66);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 25);
			this->label22->TabIndex = 24;
			this->label22->Text = L"*";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(674, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 25);
			this->label21->TabIndex = 23;
			this->label21->Text = L"*";
			// 
			// btn_guardar
			// 
			this->btn_guardar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_guardar->BackColor = System::Drawing::SystemColors::Control;
			this->btn_guardar->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->btn_guardar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->Location = System::Drawing::Point(718, 66);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(105, 30);
			this->btn_guardar->TabIndex = 9;
			this->btn_guardar->Text = L"SALIDA";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &ingresar::btn_guardar_Click);
			// 
			// txt_tectel
			// 
			this->txt_tectel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_tectel->Location = System::Drawing::Point(201, 66);
			this->txt_tectel->Name = L"txt_tectel";
			this->txt_tectel->Size = System::Drawing::Size(119, 20);
			this->txt_tectel->TabIndex = 8;
			// 
			// txt_tecnico
			// 
			this->txt_tecnico->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_tecnico->Location = System::Drawing::Point(201, 37);
			this->txt_tecnico->Name = L"txt_tecnico";
			this->txt_tecnico->Size = System::Drawing::Size(465, 20);
			this->txt_tecnico->TabIndex = 8;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(116, 70);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 16);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Telefono:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Datos Encargado:";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(116, 37);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Tecnico:";
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->lbl_orden);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->txt_telefono);
			this->panel2->Controls->Add(this->txt_direccion);
			this->panel2->Controls->Add(this->txt_nombre);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(860, 148);
			this->panel2->TabIndex = 1;
			// 
			// lbl_orden
			// 
			this->lbl_orden->AutoSize = true;
			this->lbl_orden->Location = System::Drawing::Point(455, 11);
			this->lbl_orden->Name = L"lbl_orden";
			this->lbl_orden->Size = System::Drawing::Size(0, 13);
			this->lbl_orden->TabIndex = 12;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(360, 6);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 16);
			this->label23->TabIndex = 9;
			this->label23->Text = L"No. Orden: ";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(747, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 25);
			this->label16->TabIndex = 8;
			this->label16->Text = L"*";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(325, 98);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 25);
			this->label15->TabIndex = 7;
			this->label15->Text = L"*";
			// 
			// txt_telefono
			// 
			this->txt_telefono->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_telefono->Location = System::Drawing::Point(201, 94);
			this->txt_telefono->Name = L"txt_telefono";
			this->txt_telefono->Size = System::Drawing::Size(119, 20);
			this->txt_telefono->TabIndex = 6;
			// 
			// txt_direccion
			// 
			this->txt_direccion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_direccion->Location = System::Drawing::Point(201, 64);
			this->txt_direccion->Name = L"txt_direccion";
			this->txt_direccion->Size = System::Drawing::Size(540, 20);
			this->txt_direccion->TabIndex = 5;
			// 
			// txt_nombre
			// 
			this->txt_nombre->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_nombre->Location = System::Drawing::Point(201, 31);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(540, 20);
			this->txt_nombre->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(116, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Telefono:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(116, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Dirección:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(116, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Datos Cliente:";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->txt_estado);
			this->panel3->Controls->Add(this->txt_accesorios);
			this->panel3->Controls->Add(this->txt_serie);
			this->panel3->Controls->Add(this->txt_modelo);
			this->panel3->Controls->Add(this->txt_marca);
			this->panel3->Controls->Add(this->txt_tipo);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(0, 148);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(860, 183);
			this->panel3->TabIndex = 2;
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(825, 27);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 25);
			this->label20->TabIndex = 22;
			this->label20->Text = L"*";
			this->label20->Click += gcnew System::EventHandler(this, &ingresar::label20_Click);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(580, 31);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 25);
			this->label19->TabIndex = 21;
			this->label19->Text = L"*";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(345, 32);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 25);
			this->label18->TabIndex = 20;
			this->label18->Text = L"*";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(169, 32);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 25);
			this->label17->TabIndex = 19;
			this->label17->Text = L"*";
			// 
			// txt_estado
			// 
			this->txt_estado->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_estado->Location = System::Drawing::Point(472, 90);
			this->txt_estado->Multiline = true;
			this->txt_estado->Name = L"txt_estado";
			this->txt_estado->Size = System::Drawing::Size(351, 74);
			this->txt_estado->TabIndex = 18;
			// 
			// txt_accesorios
			// 
			this->txt_accesorios->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_accesorios->Location = System::Drawing::Point(54, 90);
			this->txt_accesorios->Multiline = true;
			this->txt_accesorios->Name = L"txt_accesorios";
			this->txt_accesorios->Size = System::Drawing::Size(351, 74);
			this->txt_accesorios->TabIndex = 17;
			// 
			// txt_serie
			// 
			this->txt_serie->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_serie->Location = System::Drawing::Point(672, 31);
			this->txt_serie->Name = L"txt_serie";
			this->txt_serie->Size = System::Drawing::Size(151, 20);
			this->txt_serie->TabIndex = 16;
			// 
			// txt_modelo
			// 
			this->txt_modelo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_modelo->Location = System::Drawing::Point(426, 30);
			this->txt_modelo->Name = L"txt_modelo";
			this->txt_modelo->Size = System::Drawing::Size(151, 20);
			this->txt_modelo->TabIndex = 15;
			// 
			// txt_marca
			// 
			this->txt_marca->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_marca->Location = System::Drawing::Point(245, 31);
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(100, 20);
			this->txt_marca->TabIndex = 14;
			// 
			// txt_tipo
			// 
			this->txt_tipo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txt_tipo->Location = System::Drawing::Point(69, 31);
			this->txt_tipo->Name = L"txt_tipo";
			this->txt_tipo->Size = System::Drawing::Size(100, 20);
			this->txt_tipo->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(51, 71);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 16);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Accesorios:";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(469, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Estado del Equipo:";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(596, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 16);
			this->label10->TabIndex = 10;
			this->label10->Text = L"No. Serie:";
			this->label10->Click += gcnew System::EventHandler(this, &ingresar::label10_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(360, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 16);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Modelo:";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(188, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Marca:";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Tipo:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Datos Equipo:";
			this->label2->Click += gcnew System::EventHandler(this, &ingresar::label2_Click);
			// 
			// ingresar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 437);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ingresar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"INFORMACION DE INGRESO - DOCKET";
			this->Load += gcnew System::EventHandler(this, &ingresar::ingresar_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

	   void contadorOrden() {
		   int contador = 0;
		   char mystring[200];
		   FILE* fe;
		   fe = fopen("machupichu_ingreso.txt", "r");
		   if (fe == 0) {
			   lbl_orden->Text = "1";
		   }else {
			   rewind(fe); //Situa el cursos de lectura/escritura al inicio
			   do {
				   fgets(mystring, 200, fe);
				   contador++;
			   } while (feof(fe) == 0);//EOF END OF FILE 3
			   fclose(fe);
			   lbl_orden->Text = Convert::ToString(contador);
		   }
		   
	   }

	   void contadorOrdenGuardar() {
		   int contador = 0;
		   char mystring[200];
		   FILE* fe;
		   fe = fopen("machupichu_ingreso.txt", "r");
		   if (fe == 0) {
			   lbl_orden->Text = "1";
		   }
		   else {
			   rewind(fe); //Situa el cursos de lectura/escritura al inicio
			   do {
				   fgets(mystring, 200, fe);
				   contador++;
			   } while (feof(fe) == 0);//EOF END OF FILE 3
			   fclose(fe);
			   lbl_orden->Text = Convert::ToString(contador + 1);
		   }

	   }
	   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ archivo = gcnew StreamWriter("machupichu_ingreso.txt", "a+");
	MessageBox::Show("Espere un momento...", "GRABANDO DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);

	if (lbl_orden->Text == "" || txt_nombre->Text == "" || txt_telefono->Text == "" || txt_tipo->Text == "" || txt_marca->Text == "" || txt_modelo->Text == ""
		|| txt_serie->Text == "" || txt_tecnico->Text == "" || txt_tectel->Text == ""){
		MessageBox::Show("Debes de llenar los campos que tienen un * al final", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		archivo->Write("\r\n");
		archivo->Write(lbl_orden->Text); archivo->Write(";");
		archivo->Write(txt_nombre->Text); archivo->Write(";");
		if (txt_direccion->Text == "") {
			archivo->Write("N/D"); archivo->Write(";");
		}
		else {
			archivo->Write(txt_direccion->Text); archivo->Write(";");
		}
		archivo->Write(txt_telefono->Text); archivo->Write(";");
		archivo->Write(txt_tipo->Text); archivo->Write(";");
		archivo->Write(txt_marca->Text); archivo->Write(";");
		archivo->Write(txt_modelo->Text); archivo->Write(";");
		archivo->Write(txt_serie->Text); archivo->Write(";");
		if (txt_accesorios->Text == "") {
			archivo->Write("N/D"); archivo->Write(";");
		}else {
			archivo->Write(txt_accesorios->Text); archivo->Write(";");
		}
		if (txt_estado->Text == "") {
			archivo->Write("N/D"); archivo->Write(";");
		}else {
			archivo->Write(txt_estado->Text); archivo->Write(";");
		}
		archivo->Write(txt_tecnico->Text); archivo->Write(";");
		archivo->Write(txt_tectel->Text); archivo->Write(";");
		
		archivo->Write("A");
		this->lbl_orden->Text = ""; this->txt_nombre->Text = L""; this->txt_direccion->Text = ""; this->txt_telefono->Text = "";
		this->txt_tipo->Text = ""; this->txt_marca->Text = ""; this->txt_modelo->Text = "";
		this->txt_serie->Text = ""; this->txt_accesorios->Text = ""; this->txt_estado->Text = "";
		this->txt_tecnico->Text = ""; this->txt_tectel->Text = "";
		MessageBox::Show("HAZ INGRESADO CORRECTAMENTE....", "ESTADO DE ORDEN", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
		contadorOrdenGuardar();
		
	}
	archivo->Close();
}

private: System::Void ingresar_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
