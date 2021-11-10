import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { FormsModule ,ReactiveFormsModule}   from '@angular/forms';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { AboutusComponent } from './aboutus/aboutus.component';
import { BooklistComponent } from './booklist/booklist.component';
import { HeaderComponent } from './header/header.component';
import { ProjectsComponent } from './projects/projects.component';
import { BookeditComponent } from './booklist/bookedit/bookedit.component';
import { BookShoppingListService } from './booklist/bookshopping-list.service';
import { ProjectDetailComponent } from './projects/project-detail/project-detail.component';
import { ProjectEditComponent } from './projects/project-edit/project-edit.component';
import { ProjectListComponent } from './projects/project-list/project-list.component';
import { ProjectStartComponent } from './projects/project-start/project-start.component';
import { ProjectItemComponent } from './projects/project-list/project-item/project-item.component';
import { ProjectService } from './projects/project.service';

@NgModule({
  declarations: [
    AppComponent,
    AboutusComponent,
    BooklistComponent,
    HeaderComponent,
    ProjectsComponent,
    BookeditComponent,
    ProjectDetailComponent,
    ProjectEditComponent,
    ProjectListComponent,
    ProjectStartComponent,
    ProjectItemComponent
  ],
  imports: [
    BrowserModule,
    ReactiveFormsModule,
    FormsModule,
    AppRoutingModule
  ],
  providers: [BookShoppingListService,ProjectService],
  bootstrap: [AppComponent]
})
export class AppModule { }
