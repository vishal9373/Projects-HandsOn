import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { AboutusComponent } from './aboutus/aboutus.component';
import { BooklistComponent } from './booklist/booklist.component';
import { ProjectDetailComponent } from './projects/project-detail/project-detail.component';
import { ProjectEditComponent } from './projects/project-edit/project-edit.component';
import { ProjectStartComponent } from './projects/project-start/project-start.component';
import { ProjectsComponent } from './projects/projects.component';

const routes: Routes = [

  { path: '', component: AboutusComponent},
  { path: 'projects', component: ProjectsComponent , children: [
    { path: '', component: ProjectStartComponent}, // Wildcard routing
    { path: 'new', component: ProjectEditComponent},
    { path: ':id', component: ProjectDetailComponent},
    { path: ':id/edit', component: ProjectEditComponent },
  ] 
  },
  { path: 'book-list',component:BooklistComponent},
  { path: 'aboutus',component:AboutusComponent},
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
