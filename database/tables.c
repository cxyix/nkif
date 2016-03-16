#
# this document describes defination of tables
#


table_basic_info
{
    member_id
    
    given_name
    sur_name
    
    gender
}

table_member_status
{
    member_id
    
    register_date
    last_paid_date
    status
}

table_member_personal_info
{
    member_id
    
    address
    postal
    city
    country

    phone_number
    email_address

    linkedin_profile
}

table_member_work_info
{
    member_id
    
    current_employer
    industry
    title
    specialty
}

table_member_work_experience
{
    member_id

    work_experience[]
}

table_work_experience
{
    member_id

    year_of_start
    year_of_end

    comany
    title

    description
}

table_member_education
{
    member_id

    number_of_education
}

table_education
{
    member_id
    education_id

    year_of_start
    year_of_end

    college
    direction

    description
}

table_summary
{
    member_id

    summary
}


