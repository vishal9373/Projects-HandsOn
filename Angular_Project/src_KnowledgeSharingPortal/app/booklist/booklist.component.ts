import { Component, OnInit,OnDestroy } from '@angular/core';
import { Book } from '../shared/Book.model';
import { BookShoppingListService } from './bookshopping-list.service';


@Component({
  selector: 'app-booklist',
  templateUrl: './booklist.component.html',
})
/*export class BooklistComponent implements OnInit {

  constructor() { }

  ngOnInit(): void {}
  }

}*/

export class BooklistComponent implements OnInit, OnDestroy 
{
  Books: Book[]=[];
  private subscription:any;

  constructor(private slService: BookShoppingListService) { }

  // Called when component gets loaded
  ngOnInit() 
  {
    this.Books = this.slService.getBooks();
    this.subscription = this.slService.BooksChanged
      .subscribe(
        (Books: Book[]) => 
        {
          this.Books = Books;
        }
      );
  }

  // Called when component gets unloaded
  ngOnDestroy() 
  {
    this.subscription.unsubscribe();
  }

  // Called when we select any specific book
  onEditItem(index: number) 
  {
    // Call the method from service
    this.slService.startedEditing.next(index);
  }
}