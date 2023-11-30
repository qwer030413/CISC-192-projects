 if(choice == 'a')
                        {
                            cout << "Enter amount to deposit: ";
                                cin >> money;
                                check.deposit(money);
                                cout << "deposit done to savings \n";
                                cout << "savings balance: " << check.displayBalance() << "\n";
                        }
                        else if(choice == 'b')
                        {
                            cout << "withdrwaw amount: ";
                            cin >> money;
                            save.withdraw(money);
                            if(save.displayBalance() < 25)
                            {
                                cout<< "balance less than 25, withdrawls are not allowed \n";
                                
                            }
                            else{
                                cout << "withdrawl done to savings \n";
                                cout << "savings balance: " << check.displayBalance() << "\n";
                            }
                            
                        }
                        else if(choice == 'c')
                        {
                            

                        }
                        else if(choice == 'd')
                        {

                        }
                        else if(choice == 'e')
                        {
                            
                            
                            
                            


                        }
                        else if(choice == 'f')
                        {
                            save.interest();

                        }
                        else if(choice == 'g')
                        {
                            break;

                        }
                    